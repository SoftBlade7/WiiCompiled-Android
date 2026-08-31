#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80143BC0;

loc_80143BC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80143BF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80143C0C;
    }
}

loc_80143BF4:
{
    r3 = 917504;
    r4 = 0x80280000u;
    r5 = r29;
    r3 = (r3 + 3);
    r4 = (r4 + 19456);
    ctx->lr = 0x80143C0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143C0C:
{
    r3 = 0x80340000u;
    r0 = 2;
    r3 = (r3 + -30144);
    r4 = 0;
    r31 = (r3 + 172);
    ctr = r0;
}

loc_80143C24:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80143C2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143C40;
    }
}

loc_80143C30:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143C38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_80143C40;
    }
}

loc_80143C3C:
{
    goto loc_80143CB0;
}

loc_80143C40:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r4 = (r4 + 1);
}

loc_80143C4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143C60;
    }
}

loc_80143C50:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143C58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_80143C60;
    }
}

loc_80143C5C:
{
    goto loc_80143CB0;
}

loc_80143C60:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r4 = (r4 + 1);
}

loc_80143C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143C80;
    }
}

loc_80143C70:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143C78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_80143C80;
    }
}

loc_80143C7C:
{
    goto loc_80143CB0;
}

loc_80143C80:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r4 = (r4 + 1);
}

loc_80143C8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143CA0;
    }
}

loc_80143C90:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143C98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_80143CA0;
    }
}

loc_80143C9C:
{
    goto loc_80143CB0;
}

loc_80143CA0:
{
    r4 = (r4 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143C24;
    }
}

loc_80143CAC:
{
    r31 = 0;
}

loc_80143CB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80143CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143D9C;
    }
}

loc_80143CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80143CBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143CC8;
    }
}

loc_80143CC0:
{
    r3 = r29;
    ctx->lr = 0x80143CC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A87Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143CC8:
{
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r4 = 257;
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctr = r12;
    ctx->lr = 0x80143CDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = MemoryInline::FlatRead16((r31 + 16));
    goto loc_80143CF0;
}

loc_80143CE4:
{
    r3 = (r31 + 20);
    ctx->lr = 0x80143CECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F4D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->lr = 0x80143CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80143CF0:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80143CF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80143CE4;
    }
}

loc_80143CFC:
{
    r3 = 0x80340000u;
    r4 = 0;
    r3 = (r3 + -30144);
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r4));
    r4 = (r3 + 172);
    r3 = 0;
    ctr = r0;
}

loc_80143D1C:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80143D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143D34;
    }
}

loc_80143D28:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143D30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143D9C;
    }
}

loc_80143D34:
{
    r0 = MemoryInline::FlatRead8((r4 + 96));
    r3 = (r3 + 1);
}

loc_80143D40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143D50;
    }
}

loc_80143D44:
{
    r0 = MemoryInline::FlatRead16((r4 + 112));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143D4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143D9C;
    }
}

loc_80143D50:
{
    r0 = MemoryInline::FlatRead8((r4 + 192));
    r3 = (r3 + 1);
}

loc_80143D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143D6C;
    }
}

loc_80143D60:
{
    r0 = MemoryInline::FlatRead16((r4 + 208));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143D68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143D9C;
    }
}

loc_80143D6C:
{
    r0 = MemoryInline::FlatRead8((r4 + 288));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80143D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143D88;
    }
}

loc_80143D7C:
{
    r0 = MemoryInline::FlatRead16((r4 + 304));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143D84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143D9C;
    }
}

loc_80143D88:
{
    r3 = (r3 + 1);
    r4 = (r4 + 384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143D1C;
    }
}

loc_80143D94:
{
    r3 = r30;
    ctx->lr = 0x80143D9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A1FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143D9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80143BC0 func_80143BC0 preserves=true fpr_mask=0x00000000
