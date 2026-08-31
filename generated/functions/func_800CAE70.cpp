#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CAE70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CAE70;

loc_800CAE70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 20;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = (r4 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 0;
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r29));
    r3 = (r30 + 22);
    r4 = (r31 + 46);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r31 + 68));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r5 = (r5_rot_0 & 15);
}

loc_800CAEC0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0_mrot_0 = (r0_rot_0 & -2147483648);
    r0_mdest_0 = (r0 & 2147483647);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r29));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r4 = (r4_rot_0 & 31);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CAEE4;
    }
}

loc_800CAED4:
{
}

loc_800CAED8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800CAEE4;
    }
}

loc_800CAEDC:
{
    r0 = 0;
    goto loc_800CAF34;
}

loc_800CAEE4:
{
}

loc_800CAEE8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800CAEFC;
    }
}

loc_800CAEEC:
{
}

loc_800CAEF0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CAEFC;
    }
}

loc_800CAEF4:
{
    r0 = 0;
    goto loc_800CAF34;
}

loc_800CAEFC:
{
}

loc_800CAF00:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(12))) {
        goto loc_800CAF0C;
    }
}

loc_800CAF04:
{
}

loc_800CAF08:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(31))) {
        goto loc_800CAF14;
    }
}

loc_800CAF0C:
{
    r0 = 0;
    goto loc_800CAF34;
}

loc_800CAF14:
{
    r3 = 0x80250000u;
    r3 = (r3 + -14704);
    r3_addr_1 = (r3 + r5);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r3 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_800CAF34:
{
}

loc_800CAF38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CAF58;
    }
}

loc_800CAF3C:
{
    r3 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r3_mrot_0 = (r3_rot_0 & 2013265920);
    r3_mdest_0 = (r3 & -2013265921);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r0 = MemoryInline::FlatRead16((r31 + 68));
    MemoryInline::FlatWrite32((r30 + 52), r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3_mrot_1 = (r3_rot_1 & 130023424);
    r3_mdest_1 = (r3 & -130023425);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r30 + 52), r3);
    goto loc_800CAF64;
}

loc_800CAF58:
{
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r0 & -2143289345);
    MemoryInline::FlatWrite32((r30 + 52), r0);
}

loc_800CAF64:
{
    r4 = MemoryInline::FlatRead8((r31 + 22));
    r3 = MemoryInline::FlatRead16((r31 + 68));
    r0 = MemoryInline::FlatRead32((r30 + 52));
}

loc_800CAF74:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_4 & 3932160);
    r0_mdest_1 = (r0 & -3932161);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r6 = MemoryInline::FlatRead8((r31 + 23));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0_mrot_2 = (r0_rot_5 & 131072);
    r0_mdest_2 = (r0 & -131073);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_800CAF8C;
    }
}

loc_800CAF88:
{
    r4 = 127;
}

loc_800CAF8C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(127));
}

loc_800CAF90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAF98;
    }
}

loc_800CAF94:
{
    r6 = 127;
}

loc_800CAF98:
{
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0_mrot_3 = (r0_rot_6 & 130048);
    r0_mdest_3 = (r0 & -130049);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0_mrot_4 = (r0_rot_7 & 1016);
    r0_mdest_4 = (r0 & -1017);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    r3 = (r30 + 44);
    r4 = (r31 + 70);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3 = r31;
    r0 = (r0 & -8);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    // inline leaf 0x800C0AF0 (11 guest instruction(s))
}

loc_inl0_0x800C0AF0:
{
    r0 = MemoryInline::FlatRead16(r3);
    r4 = 0;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_8 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_inl0_0x800C0B00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x800C0B08;
    }
}

loc_inl0_0x800C0B04:
{
    r4 = r0;
}

loc_inl0_0x800C0B08:
{
    r3 = 0x80250000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + -18256);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_inl0_cont_800C0AF0:
{
    // end of inlined leaf 0x800C0AF0
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_10 & 255);
    MemoryInline::FlatWrite8((r30 + 56), static_cast<uint8_t>(r0));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & 255);
    MemoryInline::FlatWrite8((r30 + 57), static_cast<uint8_t>(r0));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_12 & 255);
    MemoryInline::FlatWrite8((r30 + 58), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 59), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CAE70 func_800CAE70 preserves=true fpr_mask=0x00000000
