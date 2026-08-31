#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020926C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020926C;

loc_8020926C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = MemoryInline::FlatRead32((r13 + -24208));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80209288:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80209364;
    }
}

loc_8020928C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_80209294:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802092A0;
    }
}

loc_80209298:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_802092A0;
    }
}

loc_8020929C:
{
    goto loc_802092A4;
}

loc_802092A0:
{
    r27 = 0;
}

loc_802092A4:
{
}

loc_802092A8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80209348;
    }
}

loc_802092AC:
{
    r0 = (r0 * 320);
    r31 = 0;
    r30 = (r27 + r0);
    goto loc_80209340;
}

loc_802092BC:
{
}

loc_802092C0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8020933C;
    }
}

loc_802092C4:
{
    r29 = (r27 + 28);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r27)) + static_cast<uint64_t>(static_cast<uint32_t>(28)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_802092C8:
{
    r28 = MemoryInline::FlatRead32(r29);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80209320;
    }
}

loc_802092D0:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802092D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802092EC;
    }
}

loc_802092DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_802092E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802092EC;
    }
}

loc_802092E4:
{
    r3 = r28;
    ctx->lr = 0x802092ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802092EC:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
}

loc_802092F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80209308;
    }
}

loc_802092F8:
{
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80209300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80209308;
    }
}

loc_80209304:
{
    ctx->lr = 0x80209308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80209308:
{
}

loc_8020930C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80209320;
    }
}

loc_80209310:
{
    MemoryInline::FlatWrite32(r29, r31);
    MemoryInline::FlatWrite32((r29 + 4), r31);
    MemoryInline::FlatWrite32((r29 + 8), r31);
    MemoryInline::FlatWrite32((r29 + 12), r31);
}

loc_80209320:
{
    r0 = MemoryInline::FlatRead32((r13 + -24216));
}

loc_80209328:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r0))) {
        goto loc_8020933C;
    }
}

loc_8020932C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80209330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020933C;
    }
}

loc_80209334:
{
    r3 = r28;
    ctx->lr = 0x8020933Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8020933C:
{
    r27 = (r27 + 320);
}

loc_80209340:
{
}

loc_80209344:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r30))) {
        goto loc_802092BC;
    }
}

loc_80209348:
{
    r3 = MemoryInline::FlatRead32((r13 + -24216));
    r4 = MemoryInline::FlatRead32((r13 + -24208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80209354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020935C;
    }
}

loc_80209358:
{
    ctx->lr = 0x8020935Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8020935C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24208), r0);
}

loc_80209364:
{
    r0 = MemoryInline::FlatRead32((r13 + -24212));
    r29 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_80209370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802093C0;
    }
}

loc_80209374:
{
    r28 = 0x80380000u;
    r30 = 0;
    r28 = (r28 + 11192);
    r31 = 0;
    goto loc_802093B0;
}

loc_80209388:
{
    r4 = MemoryInline::FlatRead32(r28);
}

loc_80209390:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802093A8;
    }
}

loc_80209394:
{
    r3 = MemoryInline::FlatRead32((r13 + -24216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020939C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802093A4;
    }
}

loc_802093A0:
{
    ctx->lr = 0x802093A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802093A4:
{
    MemoryInline::FlatWrite32(r28, r31);
}

loc_802093A8:
{
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_802093B0:
{
}

loc_802093B4:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r29))) {
        goto loc_80209388;
    }
}

loc_802093B8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24212), r0);
}

loc_802093C0:
{
    r3 = MemoryInline::FlatRead32((r13 + -24216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802093C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802093D8;
    }
}

loc_802093CC:
{
    ctx->lr = 0x802093D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24216), r0);
}

loc_802093D8:
{
    r0 = 0;
    r11 = (r1 + 32);
    MemoryInline::FlatWrite32((r13 + -24224), r0);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020926C func_8020926C preserves=true fpr_mask=0x00000000
