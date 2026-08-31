#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E0B30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E0B30;

loc_806E0B30:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    MemoryInline::FlatWriteRam32((r1 + 164), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_806E0B54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806E0C80;
    }
}

loc_806E0B58:
{
    r0 = MemoryInline::FlatRead8((r3 + 176));
}

loc_806E0B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806E0C80;
    }
}

loc_806E0B64:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
}

loc_806E0B6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806E0C80;
    }
}

loc_806E0B70:
{
    r30 = 0x802A0000u;
    r3 = (r1 + 44);
    r4 = (r30 + 16688);
    r5 = (r29 + 268);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + -252), 0, 264u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 252u, r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 256u, (r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    r4 = (r30 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r7 = 0x808A0000u;
    f5.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r31 = 0x808C0000u;
    f4.d = MemoryInline::FlatReadFloat32((r30 + 16688));
    r6 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r4 = (r29 + 48);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    r5 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 1836));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 26664));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f6.d);
    f6.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 1648));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 252u, (r29 + 268));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 256u, (r29 + 272));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r29 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f2.d = MemoryInline::FlatReadFloat32((r1 + 120));
    r30 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 26664));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 16));
}

loc_806E0C50:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806E0C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0C6C;
    }
}

loc_806E0C60:
{
    r5 = (r1 + 104);
    r4 = 0;
    ctx->lr = 0x806E0C6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_806E0C6C:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_806E0C78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E0C50;
    }
}

loc_806E0C7C:
{
    goto loc_806E0D2C;
}

loc_806E0C80:
{
    r31 = 0x802A0000u;
    r3 = (r1 + 32);
    r4 = (r31 + 16688);
    r5 = (r29 + 268);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + -252), 0, 264u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 260u, (r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 252u, r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 256u, (r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    r3 = (r31 + 16688);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r30 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 252u, (r29 + 268));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 256u, (r29 + 272));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 260u, (r29 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r29 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r29 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r29 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 16));
}

loc_806E0D00:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806E0D0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0D1C;
    }
}

loc_806E0D10:
{
    r5 = (r1 + 56);
    r4 = 0;
    ctx->lr = 0x806E0D1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_806E0D1C:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_806E0D28:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E0D00;
    }
}

loc_806E0D2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    r29 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FF gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E0B30 func_806E0B30 preserves=true fpr_mask=0x00000000
