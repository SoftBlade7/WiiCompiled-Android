#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BCCC0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BCCC0;

loc_800BCCC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800BC420 (7 guest instruction(s))
}

loc_inl0_0x800BC420:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl0_0x800BC428:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800BC434;
    }
}

loc_inl0_0x800BC42C:
{
    r3 = 0;
    goto loc_inl0_cont_800BC420;
}

loc_inl0_0x800BC434:
{
    r3 = (r3 + 192);
}

loc_inl0_cont_800BC420:
{
    // end of inlined leaf 0x800BC420
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BCCD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BCCE8;
    }
}

loc_800BCCD8:
{
    r3 = 5;
    ctx->lr = 0x800BCCE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 5;
    goto loc_800BCD44;
}

loc_800BCCE8:
{
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BC370
}

loc_800BCCF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800BCCFC;
    }
}

loc_800BCCF4:
{
    r0 = 0;
    goto loc_800BCD14;
}

loc_800BCCFC:
{
    // inline leaf 0x800BC420 (7 guest instruction(s))
}

loc_inl2_0x800BC420:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl2_0x800BC428:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800BC434;
    }
}

loc_inl2_0x800BC42C:
{
    r3 = 0;
    goto loc_inl2_cont_800BC420;
}

loc_inl2_0x800BC434:
{
    r3 = (r3 + 192);
}

loc_inl2_cont_800BC420:
{
    // end of inlined leaf 0x800BC420
}

loc_800BCD04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800BCD10;
    }
}

loc_800BCD08:
{
    r0 = 0;
    goto loc_800BCD14;
}

loc_800BCD10:
{
    r0 = MemoryInline::FlatRead32((r3 + 152));
}

loc_800BCD14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BCD18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BCD30;
    }
}

loc_800BCD1C:
{
    ctx->lr = 0x800BCD20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x800BCD28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 6;
    goto loc_800BCD44;
}

loc_800BCD30:
{
    r5 = 0x800C0000u;
    r3 = 1;
    r5 = (r5 + -13232);
    r4 = 1;
    ctx->lr = 0x800BCD44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BE150u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BCD44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BCCC0 func_800BCCC0 preserves=true fpr_mask=0x00000000
