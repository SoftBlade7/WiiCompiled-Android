#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014795C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8014795C;

loc_8014795C:
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
    r31 = 0x80340000u;
    r26 = r3;
    r31 = (r31 + -28872);
    r27 = r4;
    r0 = MemoryInline::FlatRead8((r31 + 1024));
    r28 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014798C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80147998;
    }
}

loc_80147990:
{
    r3 = 1;
    goto loc_80147AD4;
}

loc_80147998:
{
    r29 = 0;
}

loc_8014799C:
{
    r3 = r26;
    r4 = (r31 + 1);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801479B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801479C4;
    }
}

loc_801479B4:
{
    r29 = (r29 + 1);
    r31 = (r31 + 52);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(16));
}

loc_801479C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014799C;
    }
}

loc_801479C4:
{
}

loc_801479C8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(16))) {
        goto loc_80147A68;
    }
}

loc_801479CC:
{
    r3 = 0x80340000u;
    r0 = 2;
    r3 = (r3 + -28872);
    r29 = 0;
    ctr = r0;
}

loc_801479E0:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801479E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_801479EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 52));
    r29 = (r29 + 1);
}

loc_801479F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_801479FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 104));
    r29 = (r29 + 1);
}

loc_80147A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_80147A0C:
{
    r0 = MemoryInline::FlatRead8((r3 + 156));
    r29 = (r29 + 1);
}

loc_80147A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_80147A1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r29 = (r29 + 1);
}

loc_80147A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_80147A2C:
{
    r0 = MemoryInline::FlatRead8((r3 + 260));
    r29 = (r29 + 1);
}

loc_80147A38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_80147A3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 312));
    r29 = (r29 + 1);
}

loc_80147A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_80147A4C:
{
    r0 = MemoryInline::FlatRead8((r3 + 364));
    r29 = (r29 + 1);
}

loc_80147A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147A68;
    }
}

loc_80147A5C:
{
    r3 = (r3 + 416);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801479E0;
    }
}

loc_80147A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(16));
}

loc_80147A6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80147A78;
    }
}

loc_80147A70:
{
    r3 = 3;
    goto loc_80147AD4;
}

loc_80147A78:
{
    r30 = (r29 * 52);
    r31 = 0x80340000u;
    r31 = (r31 + -28872);
    r31_addr_1 = (r31 + r30);
    r0 = MemoryInline::FlatRead8(r31_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80147A8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80147ABC;
    }
}

loc_80147A90:
{
    r0 = 1;
    r3 = (r31 + r30);
    r31_addr_2 = (r31 + r30);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r0));
    r4 = r26;
    r3 = (r3 + 1);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + r30);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_80147ABC:
{
    r4 = 0x80340000u;
    r3 = 0;
    r4 = (r4 + -28872);
    r4 = (r4 + r30);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r29));
}

loc_80147AD4:
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000FB gpr_write=0xFC0008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8014795C func_8014795C preserves=true fpr_mask=0x00000000
