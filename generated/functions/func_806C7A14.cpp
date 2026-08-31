#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C7A14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C7A14;

loc_806C7A14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    }
    r26 = r4;
    r27 = r5;
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_806C7A38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_806C7A44;
    }
}

loc_806C7A3C:
{
    r0 = MemoryInline::FlatRead32(r3);
    goto loc_806C7A48;
}

loc_806C7A44:
{
    r0 = 0;
}

loc_806C7A48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806C7A4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C7B00;
    }
}

loc_806C7A50:
{
    r30 = r27;
    r31 = (r1 + 12);
    r29 = 0;
}

loc_806C7A5C:
{
    r28 = 0;
    goto loc_806C7AD8;
}

loc_806C7A64:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806C7A74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C7A80;
    }
}

loc_806C7A78:
{
    r4 = MemoryInline::FlatRead32(r4);
    goto loc_806C7A84;
}

loc_806C7A80:
{
    r4 = 0;
}

loc_806C7A84:
{
    r5 = r28;
    ctx->lr = 0x806C7A8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800730B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r1 + 20);
    ctx->lr = 0x806C7A94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r8 = MemoryInline::FlatRead8(r26);
    r5 = r31;
    r7 = MemoryInline::FlatRead8((r26 + 1));
    r4 = 2;
    r6 = MemoryInline::FlatRead8((r26 + 2));
    r0 = MemoryInline::FlatRead8((r26 + 3));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->lr = 0x806C7AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x806C7AD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050470u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_806C7AD8:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x8004EA50 (13 guest instruction(s))
}

loc_inl0_0x8004EA50:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_inl0_0x8004EA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA68;
    }
}

loc_inl0_0x8004EA60:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004EA6C;
}

loc_inl0_0x8004EA68:
{
    r3 = 0;
}

loc_inl0_0x8004EA6C:
{
}

loc_inl0_0x8004EA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004EA7C;
    }
}

loc_inl0_0x8004EA74:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004EA50;
}

loc_inl0_0x8004EA7C:
{
    r3 = 0;
}

loc_inl0_cont_8004EA50:
{
    // end of inlined leaf 0x8004EA50
}

loc_806C7AEC:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r3))) {
        goto loc_806C7A64;
    }
}

loc_806C7AF0:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_806C7AFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806C7A5C;
    }
}

loc_806C7B00:
{
    r26 = MemoryInline::FlatRead32((r1 + 72));
    r27 = MemoryInline::FlatRead32((r1 + 76));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x806C7A14 func_806C7A14 preserves=true fpr_mask=0x00000000
