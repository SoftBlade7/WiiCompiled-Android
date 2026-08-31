#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009C410(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009C410;

loc_8009C410:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = (r1 + 40);
    // inline leaf 0x8009DB10 (10 guest instruction(s))
    r5 = 0;
    r4 = 1;
    r0 = 128;
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 24), r5);
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r3 + 28), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 69u, (r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 70u, (r3 + 30), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 36), r5);
    }
    // end of inlined leaf 0x8009DB10
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 92), 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r27 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r27 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r27 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r27 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r27 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r1 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r27 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r1 + 60), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r27 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009C480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C4D0;
    }
}

loc_8009C484:
{
    // inline leaf 0x800A1540 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800A1540
    r26 = r3;
    r4 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x8009C498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DFA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009C49C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C4C0;
    }
}

loc_8009C4A0:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead8((r1 + 12));
    r3 = MemoryInline::FlatRead8((r1 + 13));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWriteRam32((r1 + 64), r5);
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 69), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 70), static_cast<uint8_t>(r0));
}

loc_8009C4C0:
{
    r3 = r26;
    r4 = r29;
    ctx->lr = 0x8009C4CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
}

loc_8009C4D0:
{
    r7 = 0x80250000u;
    r7 = (r7 + -27792);
    r6 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
}

loc_8009C4E0:
{
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r8 = r27;
    r4 = MemoryInline::FlatRead32((r7 + 8));
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r0 = MemoryInline::FlatRead32((r7 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8009C514;
    }
}

loc_8009C510:
{
    r8 = (r27 + 84);
}

loc_8009C514:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    r3 = MemoryInline::FlatRead32((r27 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009C520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C528;
    }
}

loc_8009C524:
{
    r3 = (r3 + 4);
}

loc_8009C528:
{
    r0 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = r27;
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r5 = r29;
    r6 = r30;
    r8 = r31;
    r7 = (r1 + 16);
    ctx->lr = 0x8009C550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DD70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r28);
    r26 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009C55C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C56C;
    }
}

loc_8009C560:
{
    r3 = r0;
    r4 = 3;
    ctx->lr = 0x8009C56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8009C56C:
{
    r11 = (r1 + 112);
    r3 = r26;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8009C410 func_8009C410 preserves=true fpr_mask=0x00000000
