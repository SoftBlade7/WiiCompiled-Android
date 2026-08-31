#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023D0F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023D0F8;

loc_8023D0F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r9 = MemoryInline::FlatRead16(r3);
    r8 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    r7 = MemoryInline::FlatRead16(r4);
    r6 = (r8 + 16104);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r10 = MemoryInline::FlatRead16((r13 + -23736));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r11 = MemoryInline::FlatRead16((r13 + -23734));
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    f10.d = MemoryInline::FlatReadFloat64((r2 + -24440));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    r0 = MemoryInline::FlatRead8((r13 + -23760));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f10.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f10.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f10.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r10);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f6.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    MemoryInline::FlatWriteRam32((r1 + 20), r11);
    MemoryInline::FlatWriteRam16((r8 + 16104), static_cast<uint16_t>(r9));
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 2), 0, 34u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r6 + 2), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r6 + 12), static_cast<uint16_t>(r5));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f10.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f10.d));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r6 + 14), static_cast<uint16_t>(r3));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r6 + 24), static_cast<uint16_t>(r10));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r6 + 26), static_cast<uint16_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 2u, (r6 + 4), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 6u, (r6 + 8), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 14u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 14u, (r6 + 16), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 18u, (r6 + 20), f4.d);
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 26u, (r6 + 28), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f10.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 30u, (r6 + 32), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023D234;
    }
}

loc_8023D220:
{
    r3 = 0x80380000u;
    r3 = (r3 + 17328);
    ctx->lr = 0x8023D22Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023D2B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -23760), static_cast<uint8_t>(r0));
}

loc_8023D234:
{
    r3 = 0x80380000u;
    r0 = 0;
    r4 = (r3 + 17328);
    MemoryInline::FlatWriteRam32((r3 + 17328), r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8023D24C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8023D264;
    }
}

loc_8023D250:
{
    r3 = MemoryInline::FlatRead16((r4 + 52));
    r0 = 1;
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r0 = (r3 | 1);
    MemoryInline::FlatWriteRam16((r4 + 52), static_cast<uint16_t>(r0));
}

loc_8023D264:
{
    r3 = 0x80380000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023D26C:
{
    r3 = (r3 + 17328);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24448));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24444));
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023D288;
    }
}

loc_8023D284:
{
    goto loc_8023D28C;
}

loc_8023D288:
{
    r3 = r31;
}

loc_8023D28C:
{
    MemoryInline::FlatWrite32((r13 + -23788), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r3 = MemoryInline::FlatRead32((r13 + -23792));
    ctx->lr = 0x8023D2A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8023E48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023D0F8 func_8023D0F8 preserves=true fpr_mask=0x00000000
