#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065001C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065001C;

loc_8065001C:
{
    r3 = MemoryInline::FlatRead32(r4);
    r29 = MemoryInline::FlatRead32((r3 + 448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80650028:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650034;
    }
}

loc_8065002C:
{
    r29 = 0;
    goto loc_80650088;
}

loc_80650034:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650084;
    }
}

loc_80650040:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80650054u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8065006C;
}

loc_80650058:
{
}

loc_8065005C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80650068;
    }
}

loc_80650060:
{
    r0 = 1;
    goto loc_80650078;
}

loc_80650068:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8065006C:
{
}

loc_80650070:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80650058;
    }
}

loc_80650074:
{
    r0 = 0;
}

loc_80650078:
{
}

loc_8065007C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80650084;
    }
}

loc_80650080:
{
    goto loc_80650088;
}

loc_80650084:
{
    r29 = 0;
}

loc_80650088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8065008C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650098;
    }
}

loc_80650090:
{
    r29 = 0;
    goto loc_806500EC;
}

loc_80650098:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 17800);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806500E8;
    }
}

loc_806500A4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806500B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806500D0;
}

loc_806500BC:
{
}

loc_806500C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806500CC;
    }
}

loc_806500C4:
{
    r0 = 1;
    goto loc_806500DC;
}

loc_806500CC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806500D0:
{
}

loc_806500D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806500BC;
    }
}

loc_806500D8:
{
    r0 = 0;
}

loc_806500DC:
{
}

loc_806500E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806500E8;
    }
}

loc_806500E4:
{
    goto loc_806500EC;
}

loc_806500E8:
{
    r29 = 0;
}

loc_806500EC:
{
    r0 = (r31 + 108);
    MemoryInline::FlatWrite32((r29 + 9180), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 452));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80650108:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650114;
    }
}

loc_8065010C:
{
    r29 = 0;
    goto loc_80650168;
}

loc_80650114:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650164;
    }
}

loc_80650120:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80650134u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8065014C;
}

loc_80650138:
{
}

loc_8065013C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80650148;
    }
}

loc_80650140:
{
    r0 = 1;
    goto loc_80650158;
}

loc_80650148:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8065014C:
{
}

loc_80650150:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80650138;
    }
}

loc_80650154:
{
    r0 = 0;
}

loc_80650158:
{
}

loc_8065015C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80650164;
    }
}

loc_80650160:
{
    goto loc_80650168;
}

loc_80650164:
{
    r29 = 0;
}

loc_80650168:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8065016C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650178;
    }
}

loc_80650170:
{
    r29 = 0;
    goto loc_806501CC;
}

loc_80650178:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 17792);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806501C8;
    }
}

loc_80650184:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80650198u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806501B0;
}

loc_8065019C:
{
}

loc_806501A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806501AC;
    }
}

loc_806501A4:
{
    r0 = 1;
    goto loc_806501BC;
}

loc_806501AC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806501B0:
{
}

loc_806501B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8065019C;
    }
}

loc_806501B8:
{
    r0 = 0;
}

loc_806501BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806501C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806501C8;
    }
}

loc_806501C4:
{
    goto loc_806501CC;
}

loc_806501C8:
{
    r29 = 0;
}

loc_806501CC:
{
    r0 = (r31 + 108);
    MemoryInline::FlatWrite32((r29 + 1732), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x806501F8u>(ctx);
    r0 = ctx->gpr[0];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065001C func_8065001C preserves=true fpr_mask=0x00000000
