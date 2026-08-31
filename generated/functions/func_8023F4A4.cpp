#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023F4A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
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
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023F4A4;

loc_8023F4A4:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRam32((r1 + 188), r31);
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 276));
    MemoryInline::FlatWriteRam32((r1 + 152), r4);
}

loc_8023F4D4:
{
    MemoryInline::FlatWriteRam32((r1 + 160), r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023F5C4;
    }
}

loc_8023F4DC:
{
    r5 = MemoryInline::FlatRead32((r3 + 276));
    r0 = MemoryInline::FlatRead16((r5 + 104));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023F4E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023F4F4;
    }
}

loc_8023F4EC:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24356));
    goto loc_8023F4F8;
}

loc_8023F4F4:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24368));
}

loc_8023F4F8:
{
    r4 = MemoryInline::FlatRead16(r5);
    r3 = (r1 + 104);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -24344));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -24336));
    f7.d = f5.d;
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f8.d = f5.d;
    f3.d = (-(f4.d));
    f2.d = (-(f1.d));
    // inline leaf 0x8019A894 (34 guest instruction(s))
    f11.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f9.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26400));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f11.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f9.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = (-(f3.d));
    f3.d = PpcFmulsInline(f4.d, f12.d);
    f0.d = (-(f0.d));
    f2.d = PpcFmulsInline(f12.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f11.d);
    f0.d = PpcFmulsInline(f11.d, f0.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f1.d = PpcFmulsInline(f1.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    // end of inlined leaf 0x8019A894
    r3 = (r28 + 220);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 276));
    r4 = (r1 + 8);
    r3 = (r3 + 124);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r4 = (r1 + 8);
    r3 = (r1 + 56);
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    f12 = ctx->fpr[12];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r4 = (r1 + 8);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24360));
    r5 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r28 + 220);
    f3.d = PpcFmulsInline(f0.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    f12 = ctx->fpr[12];
    r3 = (r1 + 8);
    r4 = (r28 + 124);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    goto loc_8023F628;
}

loc_8023F5C4:
{
    r0 = MemoryInline::FlatRead16((r3 + 104));
    r0 = (r0 & 4);
}

loc_8023F5CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023F5D8;
    }
}

loc_8023F5D0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24356));
    goto loc_8023F5DC;
}

loc_8023F5D8:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24368));
}

loc_8023F5DC:
{
    r4 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r1 + 104);
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -24344));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -24336));
    f7.d = f5.d;
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f8.d = f5.d;
    f3.d = (-(f4.d));
    f2.d = (-(f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x8019A894u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
}

loc_8023F628:
{
    r3 = (r1 + 104);
    r4 = (r28 + 124);
    r5 = (r28 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    f12 = ctx->fpr[12];
    r31 = r28;
    r30 = (r28 + 300);
    r29 = 0;
    goto loc_8023F664;
}

loc_8023F648:
{
    r4 = MemoryInline::FlatRead8((r31 + 304));
    r3 = r30;
    r5 = (r28 + 172);
    ctx->lr = 0x8023F658u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800509A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r31 = (r31 + 8);
    r30 = (r30 + 8);
    r29 = (r29 + 1);
}

loc_8023F664:
{
    r0 = MemoryInline::FlatRead8((r28 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8023F66C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8023F648;
    }
}

loc_8023F670:
{
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    r28 = MemoryInline::FlatRead32((r1 + 176));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
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
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003F gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x8000E000 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023F4A4 func_8023F4A4 preserves=true fpr_mask=0x00000000
