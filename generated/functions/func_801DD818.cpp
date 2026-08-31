#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DD818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DD818;

loc_801DD818:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r30 = r4;
    r31 = r3;
    r4 = 0;
    r5 = 256;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DA030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 0;
    r0 = 256;
    MemoryInline::FlatWrite32(r31, r29);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    ctx->lr = 0x801DD854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC7BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r31 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 24), r29);
    MemoryInline::FlatWrite32((r31 + 20), r29);
    ctx->lr = 0x801DD864u;
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
    InvokeDirectCpu<0x801DC808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_801DD868:
{
    MemoryInline::FlatWrite16((r31 + 202), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD8B4;
    }
}

loc_801DD870:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD884;
    }
}

loc_801DD874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801DD878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD894;
    }
}

loc_801DD87C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD8A4;
    }
}

loc_801DD880:
{
    goto loc_801DD8E4;
}

loc_801DD884:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_801DD888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DD8D4;
    }
}

loc_801DD88C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DD8E4;
    }
}

loc_801DD890:
{
    goto loc_801DD8C4;
}

loc_801DD894:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 13);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_801DD8EC;
}

loc_801DD8A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 5);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_801DD8EC;
}

loc_801DD8B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 9);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_801DD8EC;
}

loc_801DD8C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_801DD8EC;
}

loc_801DD8D4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_801DD8EC;
}

loc_801DD8E4:
{
    r3 = -3;
    goto loc_801DD9F0;
}

loc_801DD8EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r29 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r29);
    r3 = (r31 + 32);
    r0 = (r0 | 2097152);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    MemoryInline::FlatWrite32((r31 + 44), r29);
    ctx->lr = 0x801DD90Cu;
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
    InvokeDirectCpu<0x801DC2ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r31 + 200), static_cast<uint8_t>(r29));
    r28 = r31;
    r27 = (r31 + 136);
    r26 = 0;
}

loc_801DD91C:
{
}

loc_801DD920:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(4))) {
        goto loc_801DD930;
    }
}

loc_801DD924:
{
    r3 = r27;
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801DC9AC
    goto loc_801DD938;
}

loc_801DD930:
{
    MemoryInline::FlatWrite32((r28 + 140), r29);
    MemoryInline::FlatWrite32((r28 + 136), r29);
}

loc_801DD938:
{
    r26 = (r26 + 1);
    r28 = (r28 + 8);
}

loc_801DD944:
{
    r27 = (r27 + 8);
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(8))) {
        goto loc_801DD91C;
    }
}

loc_801DD94C:
{
    r3 = (r31 + 64);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 72);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801DC9AC
    r29 = 0;
    r27 = r31;
    MemoryInline::FlatWrite32((r31 + 96), r29);
    r28 = (r31 + 104);
    r26 = 0;
    r30 = 65536;
    MemoryInline::FlatWrite32((r31 + 100), r29);
    MemoryInline::FlatWrite8((r31 + 201), static_cast<uint8_t>(r29));
}

loc_801DD97C:
{
    r3 = r28;
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801DC9AC
    MemoryInline::FlatWrite32((r27 + 120), r29);
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
}

loc_801DD990:
{
    r28 = (r28 + 8);
    MemoryInline::FlatWrite32((r27 + 128), r30);
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DD97C;
    }
}

loc_801DD9A0:
{
    r3 = (r31 + 48);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 196u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 56);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 80);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 88);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 208);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 160u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 216);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 168u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r3 = (r31 + 224);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 176u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r3 + 4), r0);
    }
    // end of inlined leaf 0x801DC9AC
    r4 = 0;
    r0 = 0x80000000u;
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r31 + 204), r4);
    r3 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r31 + 236), r4);
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r31 + 240), r0);
    }
}

loc_801DD9F0:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DD818 func_801DD818 preserves=true fpr_mask=0x00000000
