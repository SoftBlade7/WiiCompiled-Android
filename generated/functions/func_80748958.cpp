#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80748958(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80748958;

loc_80748958:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x808D0000u;
    r30 = r3;
    r31 = (r31 + -18176);
    ctx->lr = 0x8074897Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80747248u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = MemoryInline::FlatRead32((r30 + 236));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80748990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 160));
    r28 = 1127219200;
    r27 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r5 = MemoryInline::FlatRead32(r4);
    r29 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r4 = 0;
    r0 = MemoryInline::FlatRead16((r5 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r27 + 11336));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 11320));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x807489D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 11320));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 11324));
    ctx->lr = 0x807489F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 160));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80748A00:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80748A20;
    }
}

loc_80748A04:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r27 + 11336));
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 820), f0.d);
}

loc_80748A20:
{
    r4 = r30;
    r3 = (r1 + 20);
    // inline leaf 0x80747308 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 276));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 292));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 308));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80747308
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 312), 0, 568u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 436u, (r30 + 748), f0.d);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 11320));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = -1;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 440u, (r30 + 752), f0.d);
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11324));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 444u, (r30 + 756), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 424u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 424u, (r30 + 736), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 428u, (r30 + 740), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 432u, (r30 + 744), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 452u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 456u, (r30 + 768), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 452u, (r30 + 764), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 448u, (r30 + 760), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 464u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 468u, (r30 + 780), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 464u, (r30 + 776), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 460u, (r30 + 772), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 476u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 480u, (r30 + 792), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 476u, (r30 + 788), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 472u, (r30 + 784), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 492u, (r30 + 804), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 488u, (r30 + 800), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 484u, (r30 + 796), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 496u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 496u, (r30 + 808), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 500u, (r30 + 812), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 504u, (r30 + 816), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 316), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 312), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 320), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r30 + 364), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r30 + 360), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 528u, (r30 + 840), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 529u, (r30 + 841), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 530u, (r30 + 842), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 512u, (r30 + 824), r0);
        MemoryInline::WriteResolved32(guest_range_0, 516u, (r30 + 828), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 520u, (r30 + 832), r4);
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r30 + 836), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 532u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 532u, (r30 + 844), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 536u, (r30 + 848), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 540u, (r30 + 852), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 548u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 552u, (r30 + 864), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 548u, (r30 + 860), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 544u, (r30 + 856), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 560u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 564u, (r30 + 876), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 560u, (r30 + 872), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 556u, (r30 + 868), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r0 = MemoryInline::FlatRead8((r3 + 85));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80748B1C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80748B30;
    }
}

loc_80748B24:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80748B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80748B3C;
    }
}

loc_80748B30:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 531u, (r30 + 843), static_cast<uint8_t>(r0));
    goto loc_80748B40;
}

loc_80748B3C:
{
    MemoryInline::WriteResolved8(guest_range_0, 531u, (r30 + 843), static_cast<uint8_t>(r4));
}

loc_80748B40:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80748B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808204B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r30 + 176);
    r4 = (r30 + 372);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80748958 func_80748958 preserves=true fpr_mask=0x00000000
