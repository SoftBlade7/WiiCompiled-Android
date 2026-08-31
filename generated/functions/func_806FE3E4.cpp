#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FE3E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FE3E4;

loc_806FE3E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r3 = 0x809C0000u;
    r29 = 0x808A0000u;
    r0 = MemoryInline::FlatRead32((r3 + 9048));
    r29 = (r29 + 5056);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FE40C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FE4B0;
    }
}

loc_806FE410:
{
    r3 = 172;
    ctx->lr = 0x806FE418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FE41C:
{
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FE4A8;
    }
}

loc_806FE424:
{
    ctx->lr = 0x806FE428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808C0000u;
    r30 = 0x808D0000u;
    r3 = (r3 + 31272);
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r28, r3);
    r3 = 0;
    f2.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r28 + 16), static_cast<uint8_t>(r3));
    r0 = 5;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r27 = (r28 + 60);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r28 + 20), f2.d);
    r30 = (r30 + -28192);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    r31 = (r28 + 172);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r28 + 28), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r28 + 36), f1.d);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r28 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r28 + 44), f2.d);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r28 + 48), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r28 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r28 + 56), f1.d);
    }
}

loc_806FE490:
{
    r3 = r27;
    // inline leaf 0x80213E1C (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25880));
    r4 = 0x802A0000u;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r4 = (r4 + 10624);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80213E1C
    MemoryInline::FlatWrite32((r27 + 8), r30);
    r27 = (r27 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r31));
}

loc_806FE4A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FE490;
    }
}

loc_806FE4A8:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 9048), r28);
}

loc_806FE4B0:
{
    r3 = 0x809C0000u;
    r11 = (r1 + 32);
    r3 = MemoryInline::FlatRead32((r3 + 9048));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FE3E4 func_806FE3E4 preserves=true fpr_mask=0x00000000
