MIT's x86_64 bit port 
----------------------

Is in 0f90388c893d1924e89e2e4d2187eda0004e9d73 (maybe not finished)

Layout
------

We add an arch/x86_64 folder for architecture depart

OBJS = \ 
  $K/arch/x86_64/swtch.S \ 
  $K/arch/x86_64/lapic.c \ 



Boot
----

-- Create a boot folder next to kernel and user

-- Copy the boot loader from our x86 port 
   https://github.com/mars-research/xv6-64-bm/tree/dev

-- This way we have a separate boot loader in the boot folder and don't 
   really depend on GRUB. 

-- Maybe we can support GRUB as well




