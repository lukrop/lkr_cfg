@lkr_cfg
==============
Every .pbo follows a naming scheme. All names start with my prefix, lkr,
followed by the prefix of the original addon creator, followed by the (shortened) name of 
the addon and finally suffixed with either _jsrs, _sound or _mag_compat.

*_jsrs.pbo
--------------
The .pbos with *_jsrs suffixes simply contain configs for the addon which enable
JSRS sound effects as well as range adjustments to the sounds (needed by JSRS).

*_sound.pbo
--------------
The .pbos with _sound suffixes contain configs for the addon which replace the original
addons weapons sounds with corresponding sounds from massi's NATO SF/Speznas weapon pack.
They depend on the .pbos with _jsrs suffixes. So you'll **need** to use the _jsrs ones too if you
want to use the _sound ones. This is because the _sound ones also change the range of the weapon
sounds to 130m (which is needed by JSRS) and you wouldn't here any weapon sounds without JSRS at a
distance further away than 130m.

Exceptions are:

### lkr_caf_chech_mas_weps
Gives the east european CAF Aggressors weapons from massis excellent weapon pack.

### lkr_caf_somali_mas_weps
Gives the african CAF Aggressors weapons from massis excellent weapon pack.

### lkr_caf_taliban_mas_weps
Gives the middle eastern CAF Aggressors weapons from massis excellent weapon pack.

### lkr_sud_russians_asdg
Adds ASDG joint rails compatibility.
