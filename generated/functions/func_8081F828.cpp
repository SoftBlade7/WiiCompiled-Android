#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081F828(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8081F828;

loc_8081F828:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r5 = 0x808D0000u;
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_3, 100u, (r1 + 100), r0);
    r5 = (r5 + 28364);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_3, 92u, (r1 + 92), r31);
    r31 = 1;
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r1 + 88), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_3, 84u, (r1 + 84), r29);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 169u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r6);
    r5 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16(r5);
    MemoryInline::WriteResolved16(guest_range_0, 136u, (r3 + 136), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 153u, (r3 + 153), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 154u, (r3 + 154), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 155u, (r3 + 155), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 156u, (r3 + 156), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 157u, (r3 + 157), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r4);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 168u, (r3 + 168), static_cast<uint8_t>(r31));
    r3 = (r3 + 88);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r4 = MemoryInline::FlatRead32(r30);
    r3 = 0x808B0000u;
    r0 = MemoryInline::FlatRead16((r29 + 44));
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r4 + 24));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r4 + 20));
        }
    }
    r0 = (r0 | 11);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -17756));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r4 + 16));
    f9.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r4 + 12));
    f10.d = PpcFmulsInline(f2.d, f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    f11.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 28u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 36));
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r4 + 32));
        }
    }
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r4 + 28));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r1 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 40), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 8), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 12), f10.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 16), f9.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r1 + 44), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r1 + 48), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r1 + 52), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r1 + 56), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r1 + 60), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r1 + 64), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 20), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 24), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r1 + 28), f6.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f4.d);
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteFloat32((r29 + 72), f11.d);
    MemoryInline::FlatWriteFloat32((r29 + 76), f10.d);
    MemoryInline::FlatWriteFloat32((r29 + 80), f9.d);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 60), f8.d);
    MemoryInline::FlatWriteFloat32((r29 + 64), f7.d);
    MemoryInline::FlatWriteFloat32((r29 + 68), f6.d);
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl1_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl1_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl1_cont_8051BED0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = r3;
    r3 = 36;
    r4 = MemoryInline::FlatRead32((r4 + 3224));
    r5 = 4;
    ctx->lr = 0x8081F960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 40), r3);
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl2_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl2_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl2_cont_8051BED0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = r3;
    r3 = 36;
    r4 = MemoryInline::FlatRead32((r4 + 3224));
    r5 = 4;
    ctx->lr = 0x8081F97Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 140), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051BED0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = r3;
    r3 = 36;
    r4 = MemoryInline::FlatRead32((r4 + 3224));
    r5 = 4;
    ctx->lr = 0x8081F998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 148), r3);
    r3 = r29;
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFF000 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8081F828 func_8081F828 preserves=true fpr_mask=0x00000000
