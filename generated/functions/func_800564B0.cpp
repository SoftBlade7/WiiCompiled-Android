#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800564B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800564B0;

loc_800564B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800564D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800564DC;
    }
}

loc_800564D4:
{
    r0 = (r3 + r0);
    goto loc_800564E0;
}

loc_800564DC:
{
    r0 = 0;
}

loc_800564E0:
{
    r3 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r3 + 10400);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 8);
    ctx->lr = 0x800564FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80056500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056544;
    }
}

loc_80056504:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80056510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005653C;
    }
}

loc_80056514:
{
    r0 = (r31 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80056528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80056534;
    }
}

loc_8005652C:
{
    r3 = (r3 + r0);
    goto loc_80056548;
}

loc_80056534:
{
    r3 = 0;
    goto loc_80056548;
}

loc_8005653C:
{
    r3 = 0;
    goto loc_80056548;
}

loc_80056544:
{
    r3 = 0;
}

loc_80056548:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FB gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800564B0 func_800564B0 preserves=true fpr_mask=0x00000000
