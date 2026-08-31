#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F933C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F933C;

loc_806F933C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806F9348:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 3792);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F94C4;
    }
}

loc_806F9368:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 9004));
    MemoryInline::FlatWrite32((r5 + 184), r4);
    r3 = MemoryInline::FlatRead32(r4);
}

loc_806F937C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F9388;
    }
}

loc_806F9380:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F938C;
}

loc_806F9388:
{
    r0 = -1;
}

loc_806F938C:
{
    MemoryInline::FlatWrite32((r5 + 188), r0);
    r29 = 0;
    r3 = MemoryInline::FlatRead32(r4);
}

loc_806F939C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F93B0;
    }
}

loc_806F93A0:
{
    // inline leaf 0x8008E8B0 (8 guest instruction(s))
}

loc_inl0_0x8008E8B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r3 = 1;
}

loc_inl0_0x8008E8BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008E8C0:
{
}

loc_inl0_0x8008E8C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008E8C8:
{
    r3 = 0;
    goto loc_inl0_cont_8008E8B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8008E8B0:
{
    // end of inlined leaf 0x8008E8B0
}

loc_806F93A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F93B0;
    }
}

loc_806F93AC:
{
    r29 = 1;
}

loc_806F93B0:
{
}

loc_806F93B4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_806F93D0;
    }
}

loc_806F93B8:
{
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F93C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F93D0;
    }
}

loc_806F93C4:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E520u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_806F93D0:
{
    r3 = MemoryInline::FlatRead32(r31);
}

loc_806F93D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F93E4;
    }
}

loc_806F93DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F93E8;
}

loc_806F93E4:
{
    r3 = -1;
}

loc_806F93E8:
{
    r0 = (r3 + -123);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
}

loc_806F93F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806F94C4;
    }
}

loc_806F93F4:
{
    r3 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 30836);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x806F9498u:
        goto loc_806F9498;
        break;
    case 0x806F94C4u:
        goto loc_806F94C4;
        break;
    case 0x806F940Cu:
        goto loc_806F940C;
        break;
    case 0x806F9458u:
        goto loc_806F9458;
        break;
    case 0x806F943Cu:
        goto loc_806F943C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_806F940C:
{
    r3 = (r30 + 464);
    r4 = MemoryInline::FlatRead32((r30 + 464));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = 2;
    ctx->lr = 0x806F9438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806FA2ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806F94C4;
}

loc_806F943C:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = (r30 + 416);
    r6 = 3;
    ctx->lr = 0x806F9454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806FA2ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806F94C4;
}

loc_806F9458:
{
    r5 = (r30 + 472);
    r6 = MemoryInline::FlatRead32((r30 + 472));
    r8 = MemoryInline::FlatRead32((r5 + 4));
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r5 + 8));
    r4 = r31;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r5 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    r6 = 4;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    MemoryInline::FlatWriteRam32((r1 + 28), r8);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x806F9494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806FA2ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806F94C4;
}

loc_806F9498:
{
    r3 = (r30 + 488);
    r4 = MemoryInline::FlatRead32((r30 + 488));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = 2;
    ctx->lr = 0x806F94C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806FA2ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806F94C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F933C func_806F933C preserves=true fpr_mask=0x00000000
