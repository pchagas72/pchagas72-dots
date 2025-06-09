(require 'package)
(setq package-enable-at-startup nil)

(add-to-list 'package-archives
	     '("melpa" . "https://melpa.org/packages/"))
(package-initialize)

(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

(setq use-dialog-box nil)
(setq use-dialog-box nil)
(setq use-file-dialog nil)
(setq make-backup-files nil)
(setq auto-save-default nil)
(menu-bar-mode -1)
(tool-bar-mode -1)
(fringe-mode -1)
(scroll-bar-mode -1)
(global-subword-mode 1)
(defalias 'yes-or-no-p 'y-or-n-p)

(use-package ewal
  :ensure t
  :init (setq ewal-use-built-in-always-p nil
	      ewal-use-built-in-on-failure-p t
	      ewal-built-in-palette "sexy-material"))
(use-package ewal-spacemacs-themes
  :ensure t
  :init (progn
	  (setq spacemacs-theme-underline-parens t
		my:rice:font (font-spec
			      :family "Terminus"
			      :weight 'semi-bold
			      :size 12.0))
	  (show-paren-mode +1)
	  (global-hl-line-mode)
	  (set-frame-font my:rice:font nil t)
	  (add-to-list  'default-frame-alist
			`(font . ,(font-xlfd-name my:rice:font))))
  :config (progn
	    (load-theme 'ewal-spacemacs-modern t)
	    (enable-theme 'ewal-spacemacs-modern)))

(set-frame-parameter (selected-frame) 'alpha '(85 . 85))
(add-to-list 'default-frame-alist '(alpha . (85 . 85)))

(global-display-line-numbers-mode)
(setq display-line-numbers-type 'relative)

;; Dired with icons:
(use-package all-the-icons
  :ensure t
  :if (display-graphic-p))

(use-package dashboard
  :ensure t
  :config
  (dashboard-setup-startup-hook)
  (setq dashboard-startup-banner "~/.emacs.d/dashboard-pic.png")
  (setq dashboard-items '((recents  . 5)
			  (bookmarks . 5)))
  (setq dashboard-banner-logo-title "Only emacs can save your soul.")) ;; Make script for quotes.
(setq initial-buffer-choice (lambda () (get-buffer "*dashboard*")))
(add-hook 'dashboard-mode-hook 'centaur-tabs-local-mode)

(use-package swiper
  :ensure t
  :bind ("C-s" . 'swiper))

(use-package switch-window
  :ensure t
  :config
  (setq switch-window-input-style 'minibuffer)
  (setq switch-window-increase 4)
  (setq switch-window-threshold 2)
  (setq switch-window-shortcut-style 'qwerty)
  (setq switch-window-qwerty-shortcuts
	'("a" "s" "d" "f" "j" "k" "l"))
  :bind
  ([remap other-window] . switch-window))

(setq ido-enable-flex-matching t)
(setq ido-everywhere t)
(ido-mode 1)

(use-package ido-vertical-mode
  :ensure t
  :init
  (ido-vertical-mode 1))
(setq ido-vertical-define-keys 'C-n-and-C-p-only)

(use-package smex
  :ensure t
  :init (smex-initialize)
  :bind
  ("M-x" . smex))

(use-package evil
  :ensure t
  :init
  (setq evil-want-C-u-scroll t)
  (setq evil-want-C-i-jump nil)
  :config
  (evil-mode 1)
  )

(use-package treemacs
  :ensure t
  :defer t
  :bind
  (("C-c t" . treemacs))
  :config
  (setq treemacs-width 30)
  (setq-local mode-line-format nil))

(use-package highlight-indent-guides
  :ensure t
  :defer t
  :hook (prog-mode . highlight-indent-guides-mode)
  :config
  (setq highlight-indent-guides-method 'character)
  (setq highlight-indent-guides-character ?\|)
  (setq highlight-indent-guides-responsive 'top))

(use-package centaur-tabs
  :ensure t
  :config
  (setq centaur-tabs-set-bar 'over
	centaur-tabs-set-icons t
	centaur-tabs-gray-out-icons 'buffer
	centaur-tabs-height 30
	centaur-tabs-cycle-scope 'tabs
	centaur-tabs-show-count t
	centaur-tabs-style "bar"
	centaur-tabs-show-new-tab-button t)
  (centaur-tabs-mode t)

  (global-set-key (kbd "M-l") 'centaur-tabs-forward)
  (global-set-key (kbd "M-h") 'centaur-tabs-backward)
  (global-set-key (kbd "M-j") 'centaur-tabs-forward-group)
  (global-set-key (kbd "M-k") 'centaur-tabs-backward-group)
  )

(use-package org-bullets
  :ensure t
  :defer t
  :config
  (add-hook 'org-mode-hook (lambda () (org-bullets-mode 1))))

(use-package lsp-mode
  :ensure t
  :defer t
  :init
  (setq lsp-keymap-prefix "C-c l")
  :config
  (setq lsp-headerline-breadcrumb-enable nil))

(use-package web-mode
  :ensure t
  :defer t
  :config
  (setq
   web-mode-markup-indent-offset 2
   web-mode-css-indent-offset 2
   web-mode-code-indent-offset 2
   web-mode-style-padding 2
   web-mode-script-padding 2
   web-mode-enable-auto-closing t
   web-mode-enable-auto-opening t
   web-mode-enable-auto-pairing t
   web-mode-enable-auto-indentation t)
  :mode
  (".html$" "*.php$" "*.tsx"))

(use-package emmet-mode
  :ensure t
  :defer t)

(use-package lsp-pyright
  :ensure t
  :defer t
  :hook (python-mode . (lambda ()
			 (setq indent-tabs-mode t)
			 (setq tab-width 4)
			 (setq python-indent-offset 4)
			 (company-mode 1)
			 (require 'lsp-pyright)
			 (pyvenv-autoload)
			 (lsp))))
(use-package pyvenv
  :ensure t
  :defer t)

(use-package go-mode
  :ensure t)
(add-hook 'go-mode-hook 'lsp-deferred)

(use-package magit
  :ensure t
  :defer t)

(setq initial-buffer-choice (lambda () (get-buffer "*dashboard*")))
