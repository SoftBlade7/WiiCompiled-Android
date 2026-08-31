#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014E2C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8014E2C4;

loc_8014E2C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    r4 = (r4 + -27840);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r4 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctr = r0;
}

loc_8014E2F0:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014E2F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014E374;
    }
}

loc_8014E2FC:
{
    r3 = r31;
    r4 = 0;
    r5 = 92;
    ctx->lr = 0x8014E30Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    r4 = r30;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 42);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0;
    r3 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 86u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 4), r5);
    r0 = (r3 + -1);
    r4 = 0x80340000u;
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r31 + 40), static_cast<uint16_t>(r0));
    r4 = (r4 + -27840);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 80), r5);
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r31 + 50), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 32), r31);
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r31 + 56), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r4 + 1978));
    MemoryInline::WriteResolved16(guest_range_0, 84u, (r31 + 88), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r31 + 49), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead16((r4 + 1976));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 1976), static_cast<uint16_t>(r0));
    ctx->lr = 0x8014E36Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014CBBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    goto loc_8014E380;
}

loc_8014E374:
{
    r31 = (r31 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014E2F0;
    }
}

loc_8014E37C:
{
    r3 = 0;
}

loc_8014E380:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7CF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014E2C4 func_8014E2C4 preserves=true fpr_mask=0x00000000
