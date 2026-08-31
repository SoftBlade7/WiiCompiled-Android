#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80671000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80671000;

loc_80671000:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r31 = r7;
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    r29 = r5;
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 240), r28);
    r28 = r4;
    r3 = r28;
    r4 = r31;
    // inline leaf 0x801DE43C (13 guest instruction(s))
}

loc_inl0_0x801DE43C:
{
}

loc_inl0_0x801DE440:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x801DE450;
    }
}

loc_inl0_0x801DE444:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_inl0_0x801DE44C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x801DE458;
    }
}

loc_inl0_0x801DE450:
{
    r3 = -3;
    goto loc_inl0_cont_801DE43C;
}

loc_inl0_0x801DE458:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWriteRam32(r5, r0);
}

loc_inl0_cont_801DE43C:
{
    // end of inlined leaf 0x801DE43C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80671040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067104C;
    }
}

loc_80671044:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_806711EC;
}

loc_8067104C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80671054:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80671060;
    }
}

loc_80671058:
{
    r3 = 1;
    goto loc_806711EC;
}

loc_80671060:
{
    r3 = r28;
    r4 = r31;
    r5 = r29;
    r6 = r30;
    ctx->lr = 0x80671074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801E4DECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80671078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80671084;
    }
}

loc_8067107C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_806711EC;
}

loc_80671084:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r31 = (r3 + -20);
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 32);
    r6 = 20;
    r5 = (r5 + -22136);
    ctx->lr = 0x806710A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = r31;
    r3 = (r1 + 32);
    r4 = (r29 + 20);
    ctx->lr = 0x806710B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 32);
    r4 = (r1 + 12);
    ctx->lr = 0x806710C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    r5 = (r1 + 12);
    r4 = 0;
    ctr = r0;
}

loc_806710D4:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8(r29);
}

loc_806710E0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806710EC;
    }
}

loc_806710E4:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_806710EC:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_806710F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80671104;
    }
}

loc_806710FC:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_80671104:
{
    r3 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_80671110:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067111C;
    }
}

loc_80671114:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_8067111C:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80671128:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80671134;
    }
}

loc_8067112C:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_80671134:
{
    r3 = MemoryInline::FlatRead8((r5 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 4));
}

loc_80671140:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067114C;
    }
}

loc_80671144:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_8067114C:
{
    r3 = MemoryInline::FlatRead8((r5 + 5));
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80671158:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80671164;
    }
}

loc_8067115C:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_80671164:
{
    r3 = MemoryInline::FlatRead8((r5 + 6));
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_80671170:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067117C;
    }
}

loc_80671174:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_8067117C:
{
    r3 = MemoryInline::FlatRead8((r5 + 7));
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_80671188:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80671194;
    }
}

loc_8067118C:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_80671194:
{
    r3 = MemoryInline::FlatRead8((r5 + 8));
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_806711A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806711AC;
    }
}

loc_806711A4:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_806711AC:
{
    r3 = MemoryInline::FlatRead8((r5 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 9));
}

loc_806711B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806711C4;
    }
}

loc_806711BC:
{
    r0 = 0;
    goto loc_806711D8;
}

loc_806711C4:
{
    r29 = (r29 + 10);
    r5 = (r5 + 10);
    r4 = (r4 + 9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806710D4;
    }
}

loc_806711D4:
{
    r0 = 1;
}

loc_806711D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806711DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806711E8;
    }
}

loc_806711E0:
{
    r3 = 1;
    goto loc_806711EC;
}

loc_806711E8:
{
    r3 = 0;
}

loc_806711EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    r28 = MemoryInline::FlatRead32((r1 + 240));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
// RECOMP_REGISTRATION base 0x80671000 func_80671000 preserves=true fpr_mask=0x00000000
