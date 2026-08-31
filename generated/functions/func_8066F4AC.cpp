#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066F4AC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066F4AC;

loc_8066F4AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F4CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F4E0;
    }
}

loc_8066F4D0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 0;
    goto loc_8066F57C;
}

loc_8066F4E0:
{
    r3 = MemoryInline::FlatRead32((r3 + 30076));
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl0_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl0_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8023320C;
    }
}

loc_inl0_0x80233204:
{
}

loc_inl0_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl0_0x80233214;
    }
}

loc_inl0_0x8023320C:
{
    r3 = 1;
    goto loc_inl0_cont_802331F8;
}

loc_inl0_0x80233214:
{
    r3 = 0;
}

loc_inl0_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F4EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F500;
    }
}

loc_8066F4F0:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = 0;
    goto loc_8066F57C;
}

loc_8066F500:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 0u, r28);
    r8 = 0;
    r29 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r28 + 1));
    r7 = 1;
    r30 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r28 + 2));
    r0 = 16;
    r31 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r28 + 3));
    r4 = 0x80670000u;
    r12 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r28 + 4));
    r5 = r27;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r28 + 5));
    r4 = (r4 + -2672);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r28 + 6));
    r6 = 0;
    r9 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r28 + 7));
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 16896), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r27 + 16896), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r27 + 44));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r27 + 16897), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r27 + 16898), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r27 + 16899), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r27 + 16900), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r27 + 16901), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r27 + 16902), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r27 + 16903), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r27 + 20), r8);
    MemoryInline::FlatWrite32((r27 + 16), r7);
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r27 + 24), r8);
    ctx->lr = 0x8066F578u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_8066F57C:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066F4AC func_8066F4AC preserves=true fpr_mask=0x00000000
