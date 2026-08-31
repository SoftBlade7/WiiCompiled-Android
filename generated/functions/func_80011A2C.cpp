#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80011A2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80011A2C;

loc_80011A2C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r27);
    MemoryInline::FlatWriteRam32((r1 + 144), r28);
    MemoryInline::FlatWriteRam32((r1 + 148), r29);
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    r27 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80011A64;
    }
}

loc_80011A44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r1 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r1 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r1 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r1 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r1 + 96), f8.d);
}

loc_80011A64:
{
    r12 = (r1 + 168);
    r0 = (r1 + 8);
    r29 = 33554432;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r5);
    r30 = -1;
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r7);
    r28 = (r1 + 116);
    r11 = 0x80010000u;
    r5 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r4);
    r4 = (r1 + 104);
    r7 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r6);
    r6 = r28;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r3);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 104), r3);
    r3 = (r11 + 5752);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r9);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 120), r12);
    }
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 124), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 108), r30);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 112), r31);
    }
    ctx->lr = 0x80011AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80010D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80011AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80011AEC;
    }
}

loc_80011AD8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r30));
}

loc_80011ADC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80011AE8;
    }
}

loc_80011AE0:
{
    r27_addr_1 = (r27 + r3);
    MemoryInline::FlatWrite8(r27_addr_1, static_cast<uint8_t>(r31));
    goto loc_80011AEC;
}

loc_80011AE8:
{
    MemoryInline::FlatWrite8((r27 + -2), static_cast<uint8_t>(r31));
}

loc_80011AEC:
{
    r27 = MemoryInline::FlatRead32((r1 + 140));
    r28 = MemoryInline::FlatRead32((r1 + 144));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80011A2C func_80011A2C preserves=true fpr_mask=0x00000000
