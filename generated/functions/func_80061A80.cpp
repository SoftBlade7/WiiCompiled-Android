#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80061A80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
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

    goto loc_80061A80;

loc_80061A80:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = r3;
    r26 = r4;
    ctx->lr = 0x80061AA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077D70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = 0x802C0000u;
    r5 = MemoryInline::FlatRead16(r26);
    r4 = (r4 + -17740);
    r3 = r31;
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    r4 = (r4 + 52);
    ctx->lr = 0x80061AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077F10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = -1;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 16), r3);
    r27 = 0;
    r28 = MemoryInline::FlatRead16(r31);
    r26 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 20), r0);
    r29 = 0;
    r30 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 28), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r31 + 43), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r31 + 42), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r31 + 41), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r31 + 40), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r31 + 39), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r31 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r31 + 37), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r31 + 36), static_cast<uint8_t>(r3));
    goto loc_80061B4C;
}

loc_80061B18:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r0 + r29);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead32(r29_addr_2);
    r0 = (r0 & 4);
}

loc_80061B28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80061B44;
    }
}

loc_80061B2C:
{
    r4 = (r31 + r27);
    r3 = (r3 + 4);
    MemoryInline::FlatWrite8((r4 + 36), static_cast<uint8_t>(r26));
    r4 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170320u>(ctx);
    r27 = (r27 + 1);
}

loc_80061B44:
{
    r29 = (r29 + 68);
    r26 = (r26 + 1);
}

loc_80061B4C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(8));
}

loc_80061B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80061B5C;
    }
}

loc_80061B54:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r28));
}

loc_80061B58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80061B18;
    }
}

loc_80061B5C:
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

// RECOMP_GUEST_ABI gpr_read=0xFC0037FE gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0xFC00105F fpr_write=0xFC001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80061A80 func_80061A80 preserves=true fpr_mask=0x00000000
