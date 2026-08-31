#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C686C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C686C;

loc_800C686C:
{
    // nop
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl0_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800BC3E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800BC3F4;
    }
}

loc_inl0_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl0_cont_800BC3E0;
}

loc_inl0_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl0_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    ctx->lr = 0x800C6888u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C688C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C68D4;
    }
}

loc_800C6890:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl1_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC3F4;
    }
}

loc_inl1_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC3E0;
}

loc_inl1_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl1_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    r31 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl2_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x800BC3E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x800BC3F4;
    }
}

loc_inl2_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl2_cont_800BC3E0;
}

loc_inl2_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl2_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    r5 = 131072;
    r4 = MemoryInline::FlatRead32(r3);
    r6 = r31;
    r3 = 0;
    r5 = (r5 + -3616);
    r7 = 0;
    ctx->lr = 0x800C68B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BF570u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C68BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C68D4;
    }
}

loc_800C68C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_800C68C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C68D4;
    }
}

loc_800C68C8:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x800C68D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BF8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800C68D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C686C func_800C686C preserves=true fpr_mask=0x00000000
