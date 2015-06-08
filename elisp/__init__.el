(add-to-list
  'load-path
  (file-name-directory load-file-name))

(autoload
  'mojo/make/mode
  "make")

(setq auto-mode-alist
  (append
    (list
      '("Makefile\\'" . mojo/make/mode)
      '("\\.mk\\'"    . mojo/make/mode))
    auto-mode-alist))
