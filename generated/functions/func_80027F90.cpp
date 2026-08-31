#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80027F90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80027F90;

loc_80027F90:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r8 = 1127219200;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r6 = 1;
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31128));
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = (r4 + 8);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31136));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r5;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31120));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31132));
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 222u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 228), r7);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 12), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 184), r4);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 180), r7);
    }
    r4 = MemoryInline::FlatRead16((r4 + 30));
    MemoryInline::WriteResolved16(guest_range_0, 220u, (r3 + 232), static_cast<uint16_t>(r4));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 140u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, r31);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 32), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r31 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 36), r4);
    r4 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r31 + 8));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r3 + 60), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r31 + 20));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 210u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_0, 210u, (r3 + 222), r4);
        MemoryInline::WriteResolved16(guest_range_0, 212u, (r3 + 224), r7);
    }
    r4 = MemoryInline::ReadResolved8(guest_range_1, 133u, (r31 + 133));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 68), f1.d);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 132u, (r31 + 132));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 64), f1.d);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 134u, (r31 + 134));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 72), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 40), f1.d);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r31 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 44), f1.d);
    r4 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r31 + 24));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 48), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_1, 52u, (r31 + 52));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 50), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r31 + 14));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 56), f0.d);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 208u, (r3 + 220), static_cast<uint8_t>(r6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r3 + 144), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 124u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r3 + 148), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r3 + 152), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r31 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r3 + 156), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r31 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 160), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 104u, (r31 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 164), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 108u, (r31 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r3 + 168), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 112u, (r31 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r3 + 172), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 116u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r3 + 176), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r3 + 100), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryInline::WriteResolved8(guest_range_0, 89u, (r3 + 101), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 54u, (r31 + 54));
    MemoryInline::WriteResolved8(guest_range_0, 90u, (r3 + 102), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 55u, (r31 + 55));
    MemoryInline::WriteResolved8(guest_range_0, 91u, (r3 + 103), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r31 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r31 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r31 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r31 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r31 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r31 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r31 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r31 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r31 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r3 + 136), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r31 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r3 + 140), f0.d);
    // inline leaf 0x80035940 (3 guest instruction(s))
    r3 = 0x802B0000u;
    r3 = (r3 + 30096);
    // end of inlined leaf 0x80035940
    r0 = MemoryInline::ReadResolved32(guest_range_1, 136u, (r31 + 136));
    MemoryInline::FlatWrite16((r29 + 234), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80028188:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800281B8;
    }
}

loc_8002818C:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r3 = 196608;
    r0 = (r3 + 17405);
    r4 = (r4 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -16356));
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r0 = (r3 + -24893);
    MemoryInline::FlatWrite32((r4 + -16356), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16((r29 + 234), static_cast<uint16_t>(r0));
}

loc_800281B8:
{
    r0 = MemoryInline::FlatRead16((r29 + 234));
    r3 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 76), 0, 187u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 160u, (r29 + 236), r0);
    r0 = 1;
    r28 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r29 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r29 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r29 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r29 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r31 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r29 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r31 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r29 + 96), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 186u, (r29 + 262), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 172u, (r29 + 248), r3);
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r0 & 255);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80028224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 240), r3);
    r3 = 1;
    MemoryInline::FlatWrite32((r29 + 244), r28);
    MemoryInline::FlatWrite32((r29 + 188), r28);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80027F90 func_80027F90 preserves=true fpr_mask=0x00000000
