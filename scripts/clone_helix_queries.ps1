rm -Force -Recurse $env:APPDATA\helix\runtime\queries\candid -ErrorAction SilentlyContinue
xcopy /i /e /y ".\helix-queries\" "$env:APPDATA\helix\runtime\queries\candid"
