#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085C16C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085C16C;

loc_8085C16C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8085C194:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(104))) {
        goto loc_8085C1A0;
    }
}

loc_8085C198:
{
}

loc_8085C19C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(105))) {
        goto loc_8085C1B4;
    }
}

loc_8085C1A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(108));
}

loc_8085C1A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085C378;
    }
}

loc_8085C1A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(109));
}

loc_8085C1AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085C298;
    }
}

loc_8085C1B0:
{
    goto loc_8085C378;
}

loc_8085C1B4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085C1C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085C1E4;
    }
}

loc_8085C1C8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r30 = (r3 + 56);
    goto loc_8085C1E8;
}

loc_8085C1E4:
{
    r30 = 0;
}

loc_8085C1E8:
{
    r3 = (r30 + 65536);
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead16((r3 + -28648));
    r31 = 0x809C0000u;
    r4 = (r4 + 12960);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r0 & 255);
    ctx->lr = 0x8085C220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052E870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 20));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r0 - r3);
}

loc_8085C230:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8085C23C;
    }
}

loc_8085C234:
{
    r0 = 1;
    goto loc_8085C248;
}

loc_8085C23C:
{
}

loc_8085C240:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(9999))) {
        goto loc_8085C248;
    }
}

loc_8085C244:
{
    r0 = 9999;
}

loc_8085C248:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + -28648), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + -27670));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(31));
}

loc_8085C260:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8085C284;
    }
}

loc_8085C264:
{
}

loc_8085C268:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8085C274;
    }
}

loc_8085C26C:
{
    r0 = 0;
    goto loc_8085C27C;
}

loc_8085C274:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8085C27C;
    }
}

loc_8085C278:
{
    r0 = 31;
}

loc_8085C27C:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -27670), static_cast<uint8_t>(r0));
}

loc_8085C284:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl1_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80621410;
}

loc_inl1_return:
{
}

loc_inl1_cont_80621410:
{
    // end of inlined leaf 0x80621410
    goto loc_8085C378;
}

loc_8085C298:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085C2A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085C2C8;
    }
}

loc_8085C2AC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r30 = (r3 + 56);
    goto loc_8085C2CC;
}

loc_8085C2C8:
{
    r30 = 0;
}

loc_8085C2CC:
{
    r3 = (r30 + 65536);
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead16((r3 + -28640));
    r31 = 0x809C0000u;
    r4 = (r4 + 12960);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r0 & 255);
    ctx->lr = 0x8085C304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052E870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r0 - r3);
}

loc_8085C314:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8085C320;
    }
}

loc_8085C318:
{
    r0 = 1;
    goto loc_8085C32C;
}

loc_8085C320:
{
}

loc_8085C324:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(9999))) {
        goto loc_8085C32C;
    }
}

loc_8085C328:
{
    r0 = 9999;
}

loc_8085C32C:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + -28640), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + -27670));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(31));
}

loc_8085C344:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8085C368;
    }
}

loc_8085C348:
{
}

loc_8085C34C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8085C358;
    }
}

loc_8085C350:
{
    r0 = 0;
    goto loc_8085C360;
}

loc_8085C358:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8085C360;
    }
}

loc_8085C35C:
{
    r0 = 31;
}

loc_8085C360:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -27670), static_cast<uint8_t>(r0));
}

loc_8085C368:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl3_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_80621410;
}

loc_inl3_return:
{
}

loc_inl3_cont_80621410:
{
    // end of inlined leaf 0x80621410
}

loc_8085C378:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000BB gpr_write=0xFC0008FB gpr_return=0x00000018 fpr_read=0xC0000FF9 fpr_write=0xC0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8085C16C func_8085C16C preserves=true fpr_mask=0x00000000
