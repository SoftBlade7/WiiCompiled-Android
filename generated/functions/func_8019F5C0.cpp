#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019F5C0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8019F5C0;

loc_8019F5C0:
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

loc_8019F5DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019F628;
    }
}

loc_8019F5E0:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r31 = r3;
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r31 = (r31 - r3);
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8019F5FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F60C;
    }
}

loc_8019F600:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F610;
}

loc_8019F60C:
{
    r30 = r3;
}

loc_8019F610:
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
    goto loc_8019F784;
}

loc_8019F628:
{
    r31 = 0x80340000u;
    r31 = (r31 + 28800);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_8019F638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019F644;
    }
}

loc_8019F63C:
{
    r0 = (r0 & 805306368);
}

loc_8019F640:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019F68C;
    }
}

loc_8019F644:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r31 = r3;
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r31 = (r31 - r3);
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8019F660:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F670;
    }
}

loc_8019F664:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F674;
}

loc_8019F670:
{
    r30 = r3;
}

loc_8019F674:
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
    goto loc_8019F784;
}

loc_8019F68C:
{
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8019F698:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F784;
    }
}

loc_8019F69C:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_8019F6A8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8019F6F4;
    }
}

loc_8019F6AC:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r31 = r3;
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r31 = (r31 - r3);
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8019F6C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F6D8;
    }
}

loc_8019F6CC:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F6DC;
}

loc_8019F6D8:
{
    r30 = r3;
}

loc_8019F6DC:
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
    goto loc_8019F784;
}

loc_8019F6F4:
{
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r31 = (r0 - r3);
    // inline leaf 0x801A10CC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -29024));
    // end of inlined leaf 0x801A10CC
    r0 = 262144;
}

loc_8019F70C:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_8019F71C;
    }
}

loc_8019F710:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_8019F720;
}

loc_8019F71C:
{
    r30 = r3;
}

loc_8019F720:
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
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_8019F748:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F784;
    }
}

loc_8019F74C:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r4 = (r3 - r31);
    r0 = 262144;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8019F75C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F76C;
    }
}

loc_8019F760:
{
    r30 = (r4 + -262144);
    r30 = (r31 + r30);
    goto loc_8019F770;
}

loc_8019F76C:
{
    r30 = r31;
}

loc_8019F770:
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

loc_8019F784:
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
// RECOMP_REGISTRATION base 0x8019F5C0 func_8019F5C0 preserves=true fpr_mask=0x00000000
