#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073DAC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073DAC4;

loc_8073DAC4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10400));
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
    r29 = r3;
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + -10520));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r1 + 29), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r1 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r1 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r1 + 42), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r0);
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r1 + 48), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r1 + 52), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r4));
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051760Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8073DB4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073DB78;
    }
}

loc_8073DB50:
{
    r0 = MemoryInline::FlatRead8((r1 + 42));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073DB58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073DB78;
    }
}

loc_8073DB5C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = (r1 + 12);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8073DB74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
}

loc_8073DB78:
{
    r3 = 0x809C0000u;
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r5 = (r31 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517590u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWrite32((r29 + 16), r0);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 11), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 13), static_cast<uint8_t>(r30));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073DAC4 func_8073DAC4 preserves=true fpr_mask=0x00000000
