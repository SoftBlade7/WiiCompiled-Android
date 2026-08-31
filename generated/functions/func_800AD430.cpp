#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AD430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800AD430;

loc_800AD430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800AD434:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_0 & 134217727);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AD444;
    }
}

loc_800AD440:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_800AD444:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_800AD450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD460;
    }
}

loc_800AD454:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800AD458:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD478;
    }
}

loc_800AD45C:
{
    goto loc_800AD480;
}

loc_800AD460:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800AD468:
{
    r3 = (r0 + r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD488;
    }
}

loc_800AD470:
{
    r3 = (r3 + 8);
    goto loc_800AD488;
}

loc_800AD478:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_800AD488;
}

loc_800AD480:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_800AD488:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = (r0 + r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AD430 func_800AD430 preserves=true fpr_mask=0x00000000
