#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CB010(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800CB010;

loc_800CB010:
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
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CB028:
{
    r27 = r3;
    r28 = r4;
    r29 = r7;
    r30 = r8;
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB058;
    }
}

loc_800CB040:
{
    r3 = r5;
    r4 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CAD60u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_800CB050:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CB058;
    }
}

loc_800CB054:
{
    r31 = (r31 | 1);
}

loc_800CB058:
{
    r0 = (r27 & 2);
}

loc_800CB05C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB0B0;
    }
}

loc_800CB060:
{
    r0 = 11;
    r4 = r30;
    r5 = r29;
    r3 = 1;
    ctr = r0;
    // nop
}

loc_800CB078:
{
    r6 = MemoryInline::FlatRead16(r5);
    r0 = MemoryInline::FlatRead16(r4);
}

loc_800CB084:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_800CB090;
    }
}

loc_800CB088:
{
    r3 = 0;
    goto loc_800CB0A4;
}

loc_800CB090:
{
}

loc_800CB094:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800CB0A4;
    }
}

loc_800CB098:
{
    r4 = (r4 + 2);
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CB078;
    }
}

loc_800CB0A4:
{
}

loc_800CB0A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CB0B0;
    }
}

loc_800CB0AC:
{
    r31 = (r31 | 2);
}

loc_800CB0B0:
{
    r0 = (r27 & 4);
}

loc_800CB0B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB108;
    }
}

loc_800CB0B8:
{
    r0 = 11;
    r4 = r30;
    r5 = r29;
    r3 = 1;
    ctr = r0;
    // nop
}

loc_800CB0D0:
{
    r6 = MemoryInline::FlatRead16((r5 + 22));
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_800CB0DC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_800CB0E8;
    }
}

loc_800CB0E0:
{
    r3 = 0;
    goto loc_800CB0FC;
}

loc_800CB0E8:
{
}

loc_800CB0EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800CB0FC;
    }
}

loc_800CB0F0:
{
    r4 = (r4 + 2);
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CB0D0;
    }
}

loc_800CB0FC:
{
}

loc_800CB100:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CB108;
    }
}

loc_800CB104:
{
    r31 = (r31 | 4);
}

loc_800CB108:
{
    r0 = (r27 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CB10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB128;
    }
}

loc_800CB110:
{
    r3 = (r29 + 44);
    r4 = (r30 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C72F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_800CB120:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CB128;
    }
}

loc_800CB124:
{
    r31 = (r31 | 8);
}

loc_800CB128:
{
    r0 = (r27 & 16);
}

loc_800CB12C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB14C;
    }
}

loc_800CB130:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_800CB144:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB14C;
    }
}

loc_800CB148:
{
    r31 = (r31 | 16);
}

loc_800CB14C:
{
    r0 = (r27 & 32);
}

loc_800CB150:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB170;
    }
}

loc_800CB154:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_3 & 15);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & 15);
}

loc_800CB168:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB170;
    }
}

loc_800CB16C:
{
    r31 = (r31 | 32);
}

loc_800CB170:
{
    r0 = (r27 & 64);
}

loc_800CB174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB194;
    }
}

loc_800CB178:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r3 = (r3_rot_5 & 31);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_5 & 31);
}

loc_800CB18C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB194;
    }
}

loc_800CB190:
{
    r31 = (r31 | 64);
}

loc_800CB194:
{
    r0 = (r27 & 128);
}

loc_800CB198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB1B8;
    }
}

loc_800CB19C:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r3 = (r3_rot_7 & 15);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_7 & 15);
}

loc_800CB1B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB1B8;
    }
}

loc_800CB1B4:
{
    r31 = (r31 | 128);
}

loc_800CB1B8:
{
    r0 = (r27 & 256);
}

loc_800CB1BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB1DC;
    }
}

loc_800CB1C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
    r3 = (r3_rot_9 & 127);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_9 & 127);
}

loc_800CB1D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB1DC;
    }
}

loc_800CB1D8:
{
    r31 = (r31 | 256);
}

loc_800CB1DC:
{
    r0 = (r27 & 512);
}

loc_800CB1E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB200;
    }
}

loc_800CB1E4:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r30 + 52));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_11 & 127);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 127);
}

loc_800CB1F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB200;
    }
}

loc_800CB1FC:
{
    r31 = (r31 | 512);
}

loc_800CB200:
{
    r0 = (r27 & 1024);
}

loc_800CB204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB27C;
    }
}

loc_800CB208:
{
    r3 = MemoryInline::FlatRead8((r29 + 56));
    r6 = 1;
    r0 = MemoryInline::FlatRead8((r30 + 56));
}

loc_800CB218:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB224;
    }
}

loc_800CB21C:
{
    r6 = 0;
    goto loc_800CB270;
}

loc_800CB224:
{
    r3 = MemoryInline::FlatRead8((r29 + 57));
    r5 = (r29 + 57);
    r0 = MemoryInline::FlatRead8((r30 + 57));
    r4 = (r30 + 57);
}

loc_800CB238:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB244;
    }
}

loc_800CB23C:
{
    r6 = 0;
    goto loc_800CB270;
}

loc_800CB244:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800CB250:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB25C;
    }
}

loc_800CB254:
{
    r6 = 0;
    goto loc_800CB270;
}

loc_800CB25C:
{
    r3 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_800CB268:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800CB270;
    }
}

loc_800CB26C:
{
    r6 = 0;
}

loc_800CB270:
{
}

loc_800CB274:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CB27C;
    }
}

loc_800CB278:
{
    r31 = (r31 | 1024);
}

loc_800CB27C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800CB280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB288;
    }
}

loc_800CB284:
{
    MemoryInline::FlatWrite32(r28, r31);
}

loc_800CB288:
{
    r0 = (0 - r31);
    r11 = (r1 + 32);
    r0 = (r0 | r31);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80001FB gpr_write=0xF800087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CB010 func_800CB010 preserves=true fpr_mask=0x00000000
