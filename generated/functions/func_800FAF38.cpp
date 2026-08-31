#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FAF38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FAF38;

loc_800FAF38:
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
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r26 = r3;
    r27 = r4;
    r28 = r5;
}

loc_800FAF60:
{
    r29 = r6;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_800FAF70;
    }
}

loc_800FAF68:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_800FAF70:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r30 = (r3 + 1);
    goto loc_800FAFE8;
}

loc_800FAF7C:
{
    r3 = MemoryInline::FlatRead32(r26);
    r4 = r30;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl1_0x800EF4B0:
{
}

loc_inl1_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800EF4C4;
    }
}

loc_inl1_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800EF4CC;
    }
}

loc_inl1_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl1_cont_800EF4B0;
}

loc_inl1_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl1_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r26 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_800FAF98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAFCC;
    }
}

loc_800FAF9C:
{
    r3 = r27;
    r4 = r31;
    ctx->lr = 0x800FAFA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FB694u>(ctx);
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FAFAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FAFCC;
    }
}

loc_800FAFB0:
{
    MemoryInline::FlatWrite32((r26 + 12), r30);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32(r28, r0);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_800FAFFC;
}

loc_800FAFCC:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = MemoryInline::FlatRead32((r26 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800FAFD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FAFE4;
    }
}

loc_800FAFDC:
{
    r3 = 0;
    goto loc_800FAFFC;
}

loc_800FAFE4:
{
    r30 = (r30 + 1);
}

loc_800FAFE8:
{
    r3 = MemoryInline::FlatRead32(r26);
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r3));
}

loc_800FAFF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FAF7C;
    }
}

loc_800FAFF8:
{
    r3 = 0;
}

loc_800FAFFC:
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

// RECOMP_GUEST_ABI gpr_read=0xFC00007B gpr_write=0xFC00087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FAF38 func_800FAF38 preserves=true fpr_mask=0x00000000
