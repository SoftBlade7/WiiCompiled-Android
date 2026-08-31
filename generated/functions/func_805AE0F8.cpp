#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AE0F8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805AE0F8;

loc_805AE0F8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x80890000u;
}

loc_805AE108:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r5 + 9448);
    r10 = 0;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805AE15C;
    }
}

loc_805AE12C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805AE13C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805AE150;
    }
}

loc_805AE140:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805AE148:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AE150;
    }
}

loc_805AE14C:
{
    r10 = 1;
}

loc_805AE150:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_805AE1BC;
}

loc_805AE15C:
{
    r9 = MemoryInline::FlatRead8((r3 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 33));
}

loc_805AE168:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r0))) {
        goto loc_805AE1A8;
    }
}

loc_805AE16C:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r8 = MemoryInline::FlatRead8((r3 + 16));
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r6 = MemoryInline::FlatRead8((r3 + 18));
    r0 = MemoryInline::FlatRead8((r3 + 19));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 33), 0, 23u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 11u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 11u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 15u, (r3 + 48), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r3 + 52), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 53), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 54), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 55), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 7u, (r3 + 40), f2.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 33), static_cast<uint8_t>(r9));
}

loc_805AE1A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805AE1B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AE1BC;
    }
}

loc_805AE1B8:
{
    r10 = 1;
}

loc_805AE1BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_805AE1C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AE340;
    }
}

loc_805AE1C4:
{
    r7 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805AE1CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AE340;
    }
}

loc_805AE1D0:
{
    r6 = MemoryInline::FlatRead8((r3 + 33));
}

loc_805AE1D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r6 = (r6 * 28);
    r0 = (r0 * 28);
    r6 = (r7 + r6);
    r7 = (r7 + r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805AE220;
    }
}

loc_805AE1F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    r0 = MemoryInline::FlatRead8((r6 + 12));
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 13));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 14));
    MemoryInline::FlatWrite8((r3 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 15));
    MemoryInline::FlatWrite8((r3 + 55), static_cast<uint8_t>(r0));
}

loc_805AE220:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 4), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r7 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r7 + 12));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r7 + 13));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r7 + 14));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r7 + 15));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r7 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r7 + 20));
}

loc_805AE25C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805AE2A0;
    }
}

loc_805AE260:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805AE278:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 17));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 18));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 19));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AE2A0;
    }
}

loc_805AE29C:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 28));
}

loc_805AE2A0:
{
}

loc_805AE2A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805AE2B4;
    }
}

loc_805AE2A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
}

loc_805AE2B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805AE2C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AE2D0;
    }
}

loc_805AE2C4:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    r29 = 1;
    goto loc_805AE2D4;
}

loc_805AE2D0:
{
    r29 = 0;
}

loc_805AE2D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    r4 = (r3 + 44);
    r5 = (r1 + 16);
    r3 = (r3 + 8);
    // inline leaf 0x805AEC8C (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    // end of inlined leaf 0x805AEC8C
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    r3 = (r30 + 12);
    r4 = (r30 + 48);
    r5 = (r1 + 12);
    // inline leaf 0x805AEC8C (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    // end of inlined leaf 0x805AEC8C
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    r3 = (r30 + 16);
    r4 = (r30 + 52);
    r5 = (r1 + 8);
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805AE314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AE340;
    }
}

loc_805AE318:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805AE320:
{
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AE340;
    }
}

loc_805AE330:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r0));
}

loc_805AE340:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AE0F8 func_805AE0F8 preserves=true fpr_mask=0x00000000
