#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80193074(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80193074;

loc_80193074:
{
    MemoryInline::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    r3 = 2;
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    MemoryInline::FlatWriteRam32((r1 + 732), r31);
    MemoryInline::FlatWriteRam32((r1 + 728), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 724), r29);
    MemoryInline::FlatWriteRam32((r1 + 720), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801930A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801932AC;
    }
}

loc_801930A4:
{
    r31 = (r3 + -2147483648);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80193020u>(ctx);
    r0 = 1073741824;
    r3 = -855638016;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = r31;
    r4 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801930E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80193134;
    }
}

loc_801930E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801930F4;
    }
}

loc_801930E8:
{
}

loc_801930EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80193100;
    }
}

loc_801930F0:
{
    goto loc_80193230;
}

loc_801930F4:
{
}

loc_801930F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_80193230;
    }
}

loc_801930FC:
{
    goto loc_8019316C;
}

loc_80193100:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80193108:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80193114;
    }
}

loc_8019310C:
{
    r0 = (r3 + -2147483648);
    goto loc_80193118;
}

loc_80193114:
{
    r0 = 0;
}

loc_80193118:
{
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80193124:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80193230;
    }
}

loc_80193128:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    goto loc_80193230;
}

loc_80193134:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
}

loc_8019313C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80193148;
    }
}

loc_80193140:
{
    r0 = (r3 + -2147483648);
    goto loc_8019314C;
}

loc_80193148:
{
    r0 = 0;
}

loc_8019314C:
{
    MemoryInline::FlatWriteRam32((r31 + 24), r0);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r4 = MemoryInline::FlatRead32((r31 + 20));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r4 = MemoryInline::FlatRead32((r31 + 28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    goto loc_80193230;
}

loc_8019316C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
}

loc_80193174:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80193180;
    }
}

loc_80193178:
{
    r3 = (r3 + -2147483648);
    goto loc_80193184;
}

loc_80193180:
{
    r3 = 0;
}

loc_80193184:
{
    MemoryInline::FlatWriteRam32((r31 + 24), r3);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r4 + r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r28 = 0;
    r29 = 0;
    goto loc_801931E8;
}

loc_801931A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r3_addr_2 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_801931B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801931C0;
    }
}

loc_801931B8:
{
    r0 = (r3 + -2147483648);
    goto loc_801931C4;
}

loc_801931C0:
{
    r0 = 0;
}

loc_801931C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r3_addr_3 = (r3 + r29);
    MemoryInline::FlatWrite32(r3_addr_3, r0);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r4 = (r3 + r29);
    r3_addr_4 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r28 = (r28 + 1);
    r29 = (r29 + 8);
}

loc_801931E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r3 + r0);
}

loc_801931F8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_801931A8;
    }
}

loc_801931FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -25600));
}

loc_80193204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80193230;
    }
}

loc_80193208:
{
    r0 = MemoryInline::FlatRead32((r13 + -25592));
}

loc_80193210:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_80193230;
    }
}

loc_80193214:
{
    r3 = MemoryInline::FlatRead32((r13 + -29296));
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -25600), r0);
}

loc_80193224:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_80193230;
    }
}

loc_80193228:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -29296), r0);
}

loc_80193230:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80193238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80193280;
    }
}

loc_8019323C:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r31 + 36));
    ctr = r12;
    ctx->lr = 0x80193260u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r3 = MemoryInline::FlatRead32((r13 + -29292));
    r4 = r31;
    ctx->lr = 0x8019327Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80194CF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80193288;
}

loc_80193280:
{
    r3 = (r31 + 44);
    ctx->lr = 0x80193288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80193288:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193010u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80193020u>(ctx);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80195024u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_801932AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 740));
    r31 = MemoryInline::FlatRead32((r1 + 732));
    r30 = MemoryInline::FlatRead32((r1 + 728));
    r29 = MemoryInline::FlatRead32((r1 + 724));
    r28 = MemoryInline::FlatRead32((r1 + 720));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x80193074 func_80193074 preserves=true fpr_mask=0x00000000
