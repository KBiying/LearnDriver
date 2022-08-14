cmd_/home/bailey/文档/Linux_Driver_Tutorial/modules.order := {   echo /home/bailey/文档/Linux_Driver_Tutorial/mymodule.ko; :; } | awk '!x[$$0]++' - > /home/bailey/文档/Linux_Driver_Tutorial/modules.order
