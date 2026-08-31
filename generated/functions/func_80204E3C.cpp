#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80204E3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80204E3C;

loc_80204E3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80204E40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80204E4C;
    }
}

loc_80204E44:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80204E4C:
{
    r3 = (r3 + 7);
    r6 = 7;
    r7 = 10;
    r8 = 1;
    goto loc_80204E98;
}

loc_80204E60:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r0 * r7);
    r0 = (r4 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80204E88;
    }
}

loc_80204E70:
{
    r4 = (r4 - r0);
    r5 = MemoryInline::FlatRead8(r3);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_80204E88:
{
    r7 = (r7 * 10);
    r6 = (r6 + -1);
    r3 = (r3 + -1);
    r8 = (r8 * 10);
}

loc_80204E98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_80204E9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80204EA8;
    }
}

loc_80204EA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80204EA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80204E60;
    }
}

loc_80204EA8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80204E3C func_80204E3C preserves=true fpr_mask=0x00000000
