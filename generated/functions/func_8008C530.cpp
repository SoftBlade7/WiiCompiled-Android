#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
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

    goto loc_8008C530;

loc_8008C530:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = r3;
    r26 = r4;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8008C570;
    }
}

loc_8008C550:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, (r1 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 8u, (r1 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r1 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r1 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r1 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r1 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r1 + 96), f8.d);
}

loc_8008C570:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r10);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r31);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008C5A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008C5AC;
    }
}

loc_8008C5A4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008C69C;
}

loc_8008C5AC:
{
}

loc_8008C5B0:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_8008C5BC;
    }
}

loc_8008C5B4:
{
    r27 = 2;
    goto loc_8008C5D4;
}

loc_8008C5BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
}

loc_8008C5C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008C5CC;
    }
}

loc_8008C5C4:
{
    r27 = 5;
    goto loc_8008C5D4;
}

loc_8008C5CC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008C69C;
}

loc_8008C5D4:
{
    r3 = (r1 + 168);
    r0 = (r1 + 8);
    r4 = 33554432;
    MemoryInline::FlatWriteRam32((r1 + 116), r4);
    r29 = (r1 + 104);
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 120), r3);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    goto loc_8008C614;
}

loc_8008C5F8:
{
    r3 = (r1 + 116);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    r28 = (r28 + 1);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r29 = (r29 + 2);
}

loc_8008C614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r27));
}

loc_8008C618:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008C5F8;
    }
}

loc_8008C61C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
}

loc_8008C620:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008C64C;
    }
}

loc_8008C624:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r1 + 104));
    MemoryInline::FlatWrite16((r3 + 320), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 106));
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r3 + 322), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8008C694;
}

loc_8008C64C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r1 + 104));
    MemoryInline::FlatWrite16((r3 + 326), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 106));
    r3 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead16((r1 + 108));
    MemoryInline::FlatWrite16((r3 + 328), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r1 + 110));
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r1 + 112));
    MemoryInline::FlatWrite16((r3 + 330), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r3 + 332), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r3 + 334), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_8008C694:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008C69C:
{
    r11 = (r1 + 160);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC000FFB gpr_write=0xFC000FFB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008C530 func_8008C530 preserves=true fpr_mask=0x00000000
