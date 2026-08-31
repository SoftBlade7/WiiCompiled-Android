#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805927D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805927D4;

loc_805927D4:
{
    r5 = 0x809C0000u;
    r6 = 0;
    r8 = MemoryInline::FlatRead32((r5 + -10456));
    r7 = MemoryInline::FlatRead32((r8 + 2928));
    r5 = (r7 + -3);
}

loc_805927EC:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(7))) {
        goto loc_80592804;
    }
}

loc_805927F0:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r0 & 193);
}

loc_805927FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80592804;
    }
}

loc_80592800:
{
    r6 = 1;
}

loc_80592804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80592808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80592814;
    }
}

loc_8059280C:
{
    r3 = (r3 + 3);
    goto loc_8059282C;
}

loc_80592814:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(4));
}

loc_80592818:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059282C;
    }
}

loc_8059281C:
{
    r0 = MemoryInline::FlatRead16((r8 + 3044));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80592824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059282C;
    }
}

loc_80592828:
{
    r3 = (r3 + 6);
}

loc_8059282C:
{
    r5 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r5 = MemoryInline::FlatRead32((r5 + 6464));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r3 = (r3_rot_0 & -32);
    r0 = (r5 + r0);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805927D4 func_805927D4 preserves=true fpr_mask=0x00000000
