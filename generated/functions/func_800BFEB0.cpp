#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BFEB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BFEB0;

loc_800BFEB0:
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
    r27 = r3;
    r28 = r4;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl1_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC5F4;
    }
}

loc_inl1_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC5E0;
}

loc_inl1_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl1_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 1;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r30 = 6;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r30);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r31, r28);
    r3 = r27;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl4_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl4_0x800BC5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
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
    r29 = (r3 + 212);
    r3 = r27;
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl5_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl5_0x800BC5E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x800BC5F4;
    }
}

loc_inl5_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl5_cont_800BC5E0;
}

loc_inl5_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl5_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r0 = 17;
    MemoryInline::FlatWrite32((r3 + 400), r0);
    r4 = (r3 + 400);
    r3 = r29;
    MemoryInline::FlatWrite32((r4 + 4), r27);
    // inline leaf 0x8019C6DC (2 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x8019C6DC
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r13 + -32280);
    r4 = 0x800C0000u;
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r5 = r29;
    r4 = (r4 + -704);
    ctx->lr = 0x800BFF44u;
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
    InvokeDirectCpu<0x8019B6E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 4);
    r30 = r3;
}

loc_800BFF50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_800BFFB8;
    }
}

loc_800BFF54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BFF58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C0044;
    }
}

loc_800BFF5C:
{
}

loc_800BFF60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-12))) {
        goto loc_800BFF70;
    }
}

loc_800BFF64:
{
}

loc_800BFF68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-14))) {
        goto loc_800BFFB8;
    }
}

loc_800BFF6C:
{
    goto loc_800C0000;
}

loc_800BFF70:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BFF7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BFF88;
    }
}

loc_800BFF80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_800BFF84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C0044;
    }
}

loc_800BFF88:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r31 = 0;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r31);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800C0044;
}

loc_800BFFB8:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BFFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BFFD0;
    }
}

loc_800BFFC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_800BFFCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C0044;
    }
}

loc_800BFFD0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r31 = 2;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r30);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800C0044;
}

loc_800C0000:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C000C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C0018;
    }
}

loc_800C0010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_800C0014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C0044;
    }
}

loc_800C0018:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r31 = 5;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r30);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800C0044:
{
    ctx->lr = 0x800C0048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
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
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BFEB0 func_800BFEB0 preserves=true fpr_mask=0x00000000
