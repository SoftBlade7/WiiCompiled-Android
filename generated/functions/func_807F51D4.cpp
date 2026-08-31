#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F51D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807F51D4;

loc_807F51D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_807F51FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_807F520C;
    }
}

loc_807F5200:
{
}

loc_807F5204:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_807F520C;
    }
}

loc_807F5208:
{
    r3 = 1;
}

loc_807F520C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F5210:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5248;
    }
}

loc_807F5214:
{
    r3 = 0x809C0000u;
    r6 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r3 + 7736));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r6 = (r6 + -23804);
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r4 = (r6 + 107);
    r6 = 0;
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 860));
    ctx->lr = 0x807F5244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F52E0;
}

loc_807F5248:
{
    r0 = (r4 * 240);
    r3 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 56));
}

loc_807F5258:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(3))) {
        goto loc_807F5288;
    }
}

loc_807F525C:
{
    r0 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F5264:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F5288;
    }
}

loc_807F5268:
{
    r4 = 0x808B0000u;
    r3 = r31;
    r4 = (r4 + -23804);
    r5 = 9714;
    r4 = (r4 + 119);
    r6 = 0;
    ctx->lr = 0x807F5284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F52E0;
}

loc_807F5288:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807F528C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F52CC;
    }
}

loc_807F5290:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl0_0x8061B358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8061B35C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8061B368;
    }
}

loc_inl0_0x8061B360:
{
    r3 = 0;
    goto loc_inl0_cont_8061B358;
}

loc_inl0_0x8061B368:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061BFACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F52A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F52CC;
    }
}

loc_807F52AC:
{
    r4 = 0x808B0000u;
    r3 = r31;
    r4 = (r4 + -23804);
    r5 = 9714;
    r4 = (r4 + 131);
    r6 = 0;
    ctx->lr = 0x807F52C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F52E0;
}

loc_807F52CC:
{
    r4 = 0x808B0000u;
    r3 = r31;
    r4 = (r4 + -23804);
    r4 = (r4 + 143);
    ctx->lr = 0x807F52E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DEECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807F52E0:
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F51D4 func_807F51D4 preserves=true fpr_mask=0x00000000
