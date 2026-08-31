#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E1490(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E1490;

loc_801E1490:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r6 + r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801E14C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E14D4;
    }
}

loc_801E14CC:
{
    r3 = -8;
    goto loc_801E158C;
}

loc_801E14D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r28 = (r6 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
}

loc_801E14E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E14FC;
    }
}

loc_801E14E8:
{
    r4 = (r28 - r4);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r5 + r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801E14F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E155C;
    }
}

loc_801E14FC:
{
    r4 = (r28 & -32);
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x801E1510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E1514:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E151C;
    }
}

loc_801E1518:
{
    goto loc_801E1550;
}

loc_801E151C:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r5 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r0 - r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_801E1538:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E1544;
    }
}

loc_801E153C:
{
    r0 = (r3 + 31);
    r4 = (r0 & -32);
}

loc_801E1544:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r5 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x801E1550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E1550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E1554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E155C;
    }
}

loc_801E1558:
{
    goto loc_801E158C;
}

loc_801E155C:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r4 = (r28 - r3);
    r3 = (r31 + r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801E1570:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E157C;
    }
}

loc_801E1574:
{
    r3 = -8;
    goto loc_801E158C;
}

loc_801E157C:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801E158C:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E1490 func_801E1490 preserves=true fpr_mask=0x00000000
