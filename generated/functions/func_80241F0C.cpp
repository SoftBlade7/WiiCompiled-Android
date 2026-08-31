#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80241F0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80241F0C;

loc_80241F0C:
{
    r5 = (r4 & 255);
    r7 = 1;
    r6 = (r5 + 247);
    r8 = 1;
    r0 = (r6 & 255);
    r9 = 0;
}

loc_80241F28:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(23))) {
        goto loc_80241F48;
    }
}

loc_80241F2C:
{
    r0 = 1;
    r5 = 8388608;
    r6 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r5 + 19);
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80241F48;
    }
}

loc_80241F44:
{
    r9 = 1;
}

loc_80241F48:
{
}

loc_80241F4C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80241F7C;
    }
}

loc_80241F50:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
    r3 = 0;
}

loc_80241F5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80241F70;
    }
}

loc_80241F60:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80241F68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(35))) {
        goto loc_80241F70;
    }
}

loc_80241F6C:
{
    r3 = 1;
}

loc_80241F70:
{
}

loc_80241F74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80241F7C;
    }
}

loc_80241F78:
{
    r8 = 0;
}

loc_80241F7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80241F80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80241F94;
    }
}

loc_80241F84:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_80241F8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80241F94;
    }
}

loc_80241F90:
{
    r7 = 0;
}

loc_80241F94:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80241F0C func_80241F0C preserves=true fpr_mask=0x00000000
