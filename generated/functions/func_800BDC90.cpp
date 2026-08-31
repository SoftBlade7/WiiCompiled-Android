#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BDC90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800BDC90;

loc_800BDC90:
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
    r30 = r3;
    r3 = r4;
    r31 = 1;
    // inline leaf 0x8019C6E4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8019C6E4
    r29 = MemoryInline::FlatRead32((r3 + 4));
    r3 = r29;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl2_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl2_0x800BC5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800BC5F4;
    }
}

loc_inl2_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl2_cont_800BC5E0;
}

loc_inl2_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl2_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r0 = (r30 + 4);
    r27 = r3;
}

loc_800BDCCC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_800BDE2C;
    }
}

loc_800BDCD0:
{
}

loc_800BDCD4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800BDCEC;
    }
}

loc_800BDCD8:
{
}

loc_800BDCDC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-6))) {
        goto loc_800BDCEC;
    }
}

loc_800BDCE0:
{
}

loc_800BDCE4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-11))) {
        goto loc_800BDE2C;
    }
}

loc_800BDCE8:
{
    goto loc_800BDE74;
}

loc_800BDCEC:
{
    r3 = r29;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl3_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl3_0x800BC5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800BC5F4;
    }
}

loc_inl3_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl3_cont_800BC5E0;
}

loc_inl3_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl3_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r28 = (r3 + 212);
    r3 = r29;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl4_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl4_0x800BC5E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_0x800BC5F4;
    }
}

loc_inl4_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl4_cont_800BC5E0;
}

loc_inl4_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl4_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r0 = 11;
    MemoryInline::FlatWrite32((r3 + 400), r0);
    r4 = (r3 + 400);
    r3 = r28;
    MemoryInline::FlatWrite32((r4 + 4), r29);
    // inline leaf 0x8019C6DC (2 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x8019C6DC
    r3 = MemoryInline::FlatRead32((r27 + 468));
    r4 = 0;
    r5 = 8192;
    ctx->lr = 0x800BDD28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BDD30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BDD44;
    }
}

loc_800BDD34:
{
    r3 = r29;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl7_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl7_0x800BC5E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl7_0x800BC5F4;
    }
}

loc_inl7_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl7_cont_800BC5E0;
}

loc_inl7_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl7_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r4 = (r3 + 72);
    goto loc_800BDD48;
}

loc_800BDD44:
{
    r4 = 0;
}

loc_800BDD48:
{
    r8 = 0x800C0000u;
    r5 = MemoryInline::FlatRead8((r27 + 69));
    r6 = MemoryInline::FlatRead32((r27 + 468));
    r9 = r28;
    r3 = (r27 + 4);
    r8 = (r8 + -9712);
    r7 = 8192;
    ctx->lr = 0x800BDD68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019D104u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + 3);
    r28 = r3;
}

loc_800BDD74:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800BDD9C;
    }
}

loc_800BDD78:
{
}

loc_800BDD7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BDD94;
    }
}

loc_800BDD80:
{
}

loc_800BDD84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-12))) {
        goto loc_800BDD9C;
    }
}

loc_800BDD88:
{
}

loc_800BDD8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-10))) {
        goto loc_800BDD9C;
    }
}

loc_800BDD90:
{
    goto loc_800BDDE4;
}

loc_800BDD94:
{
    r31 = 0;
    goto loc_800BDEB8;
}

loc_800BDD9C:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BDDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BDDB4;
    }
}

loc_800BDDAC:
{
}

loc_800BDDB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BDEB8;
    }
}

loc_800BDDB4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r29 = 2;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r29);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r28);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800BDEB8;
}

loc_800BDDE4:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BDDF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BDDFC;
    }
}

loc_800BDDF4:
{
}

loc_800BDDF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BDEB8;
    }
}

loc_800BDDFC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r29 = 5;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r29);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r30);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800BDEB8;
}

loc_800BDE2C:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BDE38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BDE44;
    }
}

loc_800BDE3C:
{
}

loc_800BDE40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BDEB8;
    }
}

loc_800BDE44:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r29 = 2;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r29);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r30);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800BDEB8;
}

loc_800BDE74:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BDE80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BDE8C;
    }
}

loc_800BDE84:
{
}

loc_800BDE88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BDEB8;
    }
}

loc_800BDE8C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r29 = 5;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r29);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r30);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800BDEB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800BDEBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BDED4;
    }
}

loc_800BDEC0:
{
    r12 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800BDEC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BDED4;
    }
}

loc_800BDECC:
{
    ctr = r12;
    ctx->lr = 0x800BDED4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800BDED4:
{
    r11 = (r1 + 32);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BDC90 func_800BDC90 preserves=true fpr_mask=0x00000000
