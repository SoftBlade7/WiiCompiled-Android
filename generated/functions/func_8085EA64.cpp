#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085EA64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_8085EA64;

loc_8085EA64:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8085E85Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085EA8C:
{
    r31 = r3;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085EAD8;
    }
}

loc_8085EA94:
{
    r6 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r4 = 1214;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 112), r29);
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r6 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r6 + 104));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 104), r0);
    r3 = MemoryInline::FlatRead32((r28 + 6336));
    ctx->lr = 0x8085EACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r28 + 6336));
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r29));
    goto loc_8085EB54;
}

loc_8085EAD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085EB24;
    }
}

loc_8085EADC:
{
    r6 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r4 = 1215;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 112), r0);
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r6 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r6 + 108));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 108), r0);
    r3 = MemoryInline::FlatRead32((r28 + 6336));
    ctx->lr = 0x8085EB14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r28 + 6336));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r0));
    goto loc_8085EB54;
}

loc_8085EB24:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 1218;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 112), r0);
    r3 = MemoryInline::FlatRead32((r28 + 6336));
    ctx->lr = 0x8085EB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r28 + 6336));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r0));
}

loc_8085EB54:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8085EB68:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8085EB78;
    }
}

loc_8085EB6C:
{
}

loc_8085EB70:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8085EB78;
    }
}

loc_8085EB74:
{
    r4 = 1;
}

loc_8085EB78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8085EB7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085ED94;
    }
}

loc_8085EB80:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085EB90:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085EBB0;
    }
}

loc_8085EB94:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r30 = (r4 + 56);
    goto loc_8085EBB4;
}

loc_8085EBB0:
{
    r30 = 0;
}

loc_8085EBB4:
{
    r29 = 0;
    r28 = 0;
    r4 = 0;
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r6 = (r3 & 255);
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r7 = 0;
    r0 = MemoryInline::FlatRead8((r5 + 36));
    r4 = (r5 + 40);
    ctr = r0;
}

loc_8085EBE4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8085EC54;
    }
}

loc_8085EBE8:
{
    r0 = MemoryInline::FlatRead32((r5 + 2928));
    r3 = 0;
}

loc_8085EBF4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8085EC04;
    }
}

loc_8085EBF8:
{
}

loc_8085EBFC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8085EC04;
    }
}

loc_8085EC00:
{
    r3 = 1;
}

loc_8085EC04:
{
}

loc_8085EC08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8085EC24;
    }
}

loc_8085EC0C:
{
    r0 = (r7 & 255);
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8085EC20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8085EC4C;
    }
}

loc_8085EC24:
{
    r0 = (r7 & 255);
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_8085EC38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8085EC40;
    }
}

loc_8085EC3C:
{
    r28 = (r28 + 1);
}

loc_8085EC40:
{
}

loc_8085EC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8085EC4C;
    }
}

loc_8085EC48:
{
    r29 = (r29 + 1);
}

loc_8085EC4C:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085EBE8;
    }
}

loc_8085EC54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8085EC58:
{
    r0 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085EC88;
    }
}

loc_8085EC64:
{
    r4 = (r6 * 240);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 244));
}

loc_8085EC74:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8085EC80;
    }
}

loc_8085EC78:
{
    r0 = r28;
    goto loc_8085ECB0;
}

loc_8085EC80:
{
    r3 = r29;
    goto loc_8085ECB0;
}

loc_8085EC88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085ECB0;
    }
}

loc_8085EC8C:
{
    r4 = (r6 * 240);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 244));
}

loc_8085EC9C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8085ECA4;
    }
}

loc_8085ECA0:
{
    r0 = r29;
}

loc_8085ECA4:
{
}

loc_8085ECA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8085ECB0;
    }
}

loc_8085ECAC:
{
    r3 = r28;
}

loc_8085ECB0:
{
    r5 = (r30 + 65536);
    r4 = 131072;
    r6 = MemoryInline::FlatRead32((r5 + -28044));
    r5 = (r0 & 65535);
    r4 = (r4 + -31073);
    r5 = (r6 + r5);
}

loc_8085ECCC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r4))) {
        goto loc_8085ECD4;
    }
}

loc_8085ECD0:
{
    r5 = r4;
}

loc_8085ECD4:
{
    r6 = (r30 + 65536);
    r4 = 131072;
    MemoryInline::FlatWrite32((r6 + -28044), r5);
    r5 = (r3 & 65535);
    r4 = (r4 + -31073);
    r6 = MemoryInline::FlatRead32((r6 + -28040));
    r6 = (r6 + r5);
}

loc_8085ECF4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r4))) {
        goto loc_8085ECFC;
    }
}

loc_8085ECF8:
{
    r6 = r4;
}

loc_8085ECFC:
{
    r5 = (r30 + 65536);
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r5 + -28040), r6);
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_8085ED18:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(7))) {
        goto loc_8085ED28;
    }
}

loc_8085ED1C:
{
}

loc_8085ED20:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(10))) {
        goto loc_8085ED28;
    }
}

loc_8085ED24:
{
    r5 = 1;
}

loc_8085ED28:
{
}

loc_8085ED2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8085ED84;
    }
}

loc_8085ED30:
{
    r5 = (r30 + 65536);
    r4 = 131072;
    r6 = MemoryInline::FlatRead32((r5 + -28028));
    r5 = (r0 & 65535);
    r0 = (r4 + -31073);
    r6 = (r6 + r5);
}

loc_8085ED4C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r0))) {
        goto loc_8085ED54;
    }
}

loc_8085ED50:
{
    r6 = r0;
}

loc_8085ED54:
{
    r5 = (r30 + 65536);
    r4 = 131072;
    MemoryInline::FlatWrite32((r5 + -28028), r6);
    r0 = (r4 + -31073);
    r3 = (r3 & 65535);
    r4 = MemoryInline::FlatRead32((r5 + -28024));
    r4 = (r4 + r3);
}

loc_8085ED74:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8085ED7C;
    }
}

loc_8085ED78:
{
    r4 = r0;
}

loc_8085ED7C:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -28024), r4);
}

loc_8085ED84:
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
}

loc_8085ED94:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x8085EA64 func_8085EA64 preserves=true fpr_mask=0x00000000
