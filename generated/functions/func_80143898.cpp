#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143898(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80143898;

loc_80143898:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r5 = (r5 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r5 + 172);
    ctr = r0;
}

loc_801438C0:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801438C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801438DC;
    }
}

loc_801438CC:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_801438D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801438DC;
    }
}

loc_801438D8:
{
    goto loc_8014394C;
}

loc_801438DC:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r6 = (r6 + 1);
}

loc_801438E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801438FC;
    }
}

loc_801438EC:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_801438F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801438FC;
    }
}

loc_801438F8:
{
    goto loc_8014394C;
}

loc_801438FC:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r6 = (r6 + 1);
}

loc_80143908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014391C;
    }
}

loc_8014390C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143914:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8014391C;
    }
}

loc_80143918:
{
    goto loc_8014394C;
}

loc_8014391C:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r6 = (r6 + 1);
}

loc_80143928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014393C;
    }
}

loc_8014392C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143934:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8014393C;
    }
}

loc_80143938:
{
    goto loc_8014394C;
}

loc_8014393C:
{
    r6 = (r6 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801438C0;
    }
}

loc_80143948:
{
    r31 = 0;
}

loc_8014394C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80143950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801439C0;
    }
}

loc_80143954:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014395C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014396C;
    }
}

loc_80143960:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1691));
}

loc_80143968:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80143978;
    }
}

loc_8014396C:
{
    r0 = 1691;
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
    goto loc_8014397C;
}

loc_80143978:
{
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
}

loc_8014397C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    ctx->lr = 0x80143990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = (r0 | 2);
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014399C:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801439C0;
    }
}

loc_801439A4:
{
    r0 = 4;
    r4 = 256;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctr = r12;
    ctx->lr = 0x801439C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801439C0:
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80143898 func_80143898 preserves=true fpr_mask=0x00000000
