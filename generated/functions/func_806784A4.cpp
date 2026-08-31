#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806784A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806784A4;

loc_806784A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806784B0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678578;
    }
}

loc_806784C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_806784C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80678508;
    }
}

loc_806784C8:
{
    r3 = (r3 + 8);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CCB64u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    // inline leaf 0x800CCC38 (7 guest instruction(s))
}

loc_inl0_0x800CCC38:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl0_0x800CCC40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CCC44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26968), r0);
    MemoryInline::FlatWrite32((r13 + -26964), r0);
    goto loc_inl0_cont_800CCC38;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CCC38:
{
    // end of inlined leaf 0x800CCC38
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_806784E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806784F0;
    }
}

loc_806784E4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80678578;
}

loc_806784F0:
{
    ctx->lr = 0x806784F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD3F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x806784FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD3B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80678578;
}

loc_80678508:
{
    r4 = (r4 * 10);
    r0 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80678514:
{
    r4 = (r4 + 10300);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80678544;
    }
}

loc_8067851C:
{
    r0 = (r5 + -7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80678524:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80678544;
    }
}

loc_80678528:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(5));
}

loc_8067852C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678544;
    }
}

loc_80678530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80678534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678554;
    }
}

loc_80678538:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(6));
}

loc_8067853C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678554;
    }
}

loc_80678540:
{
    goto loc_80678564;
}

loc_80678544:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r4 = (r4 + r5);
    goto loc_80678570;
}

loc_80678554:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r4 = (r4 + r5);
    goto loc_80678570;
}

loc_80678564:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r4 = (r4 + 8);
}

loc_80678570:
{
    r0 = (0 - r4);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80678578:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806784A4 func_806784A4 preserves=true fpr_mask=0x00000000
