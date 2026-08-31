#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019F79C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019F79C;

loc_8019F79C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A8A50u>(ctx);
    r3 = ctx->gpr[3];
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8019F7B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019F804;
    }
}

loc_8019F7BC:
{
    // inline leaf 0x801A10AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25412));
    // end of inlined leaf 0x801A10AC
    r31 = r3;
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r31 = (r31 - r3);
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8019F7D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F7E8;
    }
}

loc_8019F7DC:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F7EC;
}

loc_8019F7E8:
{
    r30 = r3;
}

loc_8019F7EC:
{
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16E4u>(ctx);
    r3 = r30;
    r4 = 262144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    goto loc_8019F968;
}

loc_8019F804:
{
    r31 = 0x80340000u;
    r31 = (r31 + 28800);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_8019F814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019F828;
    }
}

loc_8019F818:
{
    r3 = (r0 & 805306368);
    r0 = (r3 + -268435456);
}

loc_8019F824:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8019F870;
    }
}

loc_8019F828:
{
    // inline leaf 0x801A10AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25412));
    // end of inlined leaf 0x801A10AC
    r31 = r3;
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r31 = (r31 - r3);
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8019F844:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F854;
    }
}

loc_8019F848:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F858;
}

loc_8019F854:
{
    r30 = r3;
}

loc_8019F858:
{
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16E4u>(ctx);
    r3 = r30;
    r4 = 262144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    goto loc_8019F968;
}

loc_8019F870:
{
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8019F87C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F968;
    }
}

loc_8019F880:
{
    // inline leaf 0x801A10AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25412));
    // end of inlined leaf 0x801A10AC
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_8019F88C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8019F8D8;
    }
}

loc_8019F890:
{
    // inline leaf 0x801A10AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25412));
    // end of inlined leaf 0x801A10AC
    r31 = r3;
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r31 = (r31 - r3);
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8019F8AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F8BC;
    }
}

loc_8019F8B0:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F8C0;
}

loc_8019F8BC:
{
    r30 = r3;
}

loc_8019F8C0:
{
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16E4u>(ctx);
    r3 = r30;
    r4 = 262144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    goto loc_8019F968;
}

loc_8019F8D8:
{
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r31 = (r0 - r3);
    // inline leaf 0x801A10C4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29020));
    // end of inlined leaf 0x801A10C4
    r0 = 262144;
}

loc_8019F8F0:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_8019F900;
    }
}

loc_8019F8F4:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F904;
}

loc_8019F900:
{
    r30 = r3;
}

loc_8019F904:
{
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16E4u>(ctx);
    r3 = r30;
    r4 = 262144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r3 = 0x80340000u;
    r3 = (r3 + 28800);
    r31 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x801A10AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25412));
    // end of inlined leaf 0x801A10AC
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_8019F92C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F968;
    }
}

loc_8019F930:
{
    // inline leaf 0x801A10AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25412));
    // end of inlined leaf 0x801A10AC
    r4 = (r3 - r31);
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8019F940:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F950;
    }
}

loc_8019F944:
{
    r30 = (r4 + -262144);
    r30 = (r31 + r30);
    goto loc_8019F954;
}

loc_8019F950:
{
    r30 = r31;
}

loc_8019F954:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16E4u>(ctx);
    r3 = r30;
    r4 = 262144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
}

loc_8019F968:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000201B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019F79C func_8019F79C preserves=true fpr_mask=0x00000000
