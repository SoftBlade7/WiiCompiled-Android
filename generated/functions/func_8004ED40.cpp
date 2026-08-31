#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004ED40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004ED40;

loc_8004ED40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_8004ED6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004ED78;
    }
}

loc_8004ED70:
{
    r3 = (r4 + r0);
    goto loc_8004ED7C;
}

loc_8004ED78:
{
    r3 = 0;
}

loc_8004ED7C:
{
}

loc_8004ED80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004ED8C;
    }
}

loc_8004ED84:
{
    r30 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004ED90;
}

loc_8004ED8C:
{
    r30 = 0;
}

loc_8004ED90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8004ED94:
{
    r29 = 0;
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EE08;
    }
}

loc_8004EDA0:
{
    goto loc_8004EE00;
}

loc_8004EDA4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_8004EDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004EDBC;
    }
}

loc_8004EDB4:
{
    r0 = (r3 + r0);
    goto loc_8004EDC0;
}

loc_8004EDBC:
{
    r0 = 0;
}

loc_8004EDC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004EDC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EDE8;
    }
}

loc_8004EDC8:
{
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004EDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004EDE0;
    }
}

loc_8004EDD8:
{
    r0 = (r0 + r3);
    goto loc_8004EDEC;
}

loc_8004EDE0:
{
    r0 = 0;
    goto loc_8004EDEC;
}

loc_8004EDE8:
{
    r0 = 0;
}

loc_8004EDEC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80051DA0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r31 = (r31 + 16);
}

loc_8004EE00:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r30));
}

loc_8004EE04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004EDA4;
    }
}

loc_8004EE08:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00007FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004ED40 func_8004ED40 preserves=true fpr_mask=0x00000000
