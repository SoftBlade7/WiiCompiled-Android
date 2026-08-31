#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D3188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807D3188;

loc_807D3188:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r6 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r6);
    r31 = MemoryInline::FlatRead32((r4 + 8));
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D31CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D31F4;
    }
}

loc_807D31D0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_807D31E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807D31F4;
    }
}

loc_807D31E8:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 & -13);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D31F4:
{
    r0 = MemoryInline::FlatRead8((r28 + 254));
}

loc_807D31FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D327C;
    }
}

loc_807D3200:
{
}

loc_807D3204:
{
    r4 = 1;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807D3218;
    }
}

loc_807D320C:
{
}

loc_807D3210:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(7))) {
        goto loc_807D3218;
    }
}

loc_807D3214:
{
    r4 = 0;
}

loc_807D3218:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 & 16);
}

loc_807D3220:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D3240;
    }
}

loc_807D3224:
{
}

loc_807D3228:
{
    r0 = (r3 & -17);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807D3240;
    }
}

loc_807D3234:
{
    r0 = (r0 & 255);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D3240:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 & 32);
}

loc_807D3248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D3268;
    }
}

loc_807D324C:
{
}

loc_807D3250:
{
    r0 = (r3 & -33);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807D3268;
    }
}

loc_807D325C:
{
    r0 = (r0 & 255);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D3268:
{
}

loc_807D326C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807D327C;
    }
}

loc_807D3270:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 & -65);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D327C:
{
}

loc_807D3280:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(19))) {
        goto loc_807D32C0;
    }
}

loc_807D3284:
{
}

loc_807D3288:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(2))) {
        goto loc_807D329C;
    }
}

loc_807D3290:
{
}

loc_807D3294:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(3))) {
        goto loc_807D329C;
    }
}

loc_807D3298:
{
    r0 = 1;
}

loc_807D329C:
{
}

loc_807D32A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D32B4;
    }
}

loc_807D32A4:
{
}

loc_807D32A8:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(7))) {
        goto loc_807D32B4;
    }
}

loc_807D32AC:
{
}

loc_807D32B0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(40))) {
        goto loc_807D32C0;
    }
}

loc_807D32B4:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 & 252);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D32C0:
{
    r3 = (r30 + 65536);
    r0 = (r3 + -21);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807D32D0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807D336C;
    }
}

loc_807D32D4:
{
    r3 = r28;
    r28 = 0;
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
    r0 = (r3 + -19);
}

loc_807D32E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_807D3358;
    }
}

loc_807D32EC:
{
    r3 = 0x808D0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 10856);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x807D3314u:
        goto loc_807D3314;
        break;
    case 0x807D3358u:
        goto loc_807D3358;
        break;
    case 0x807D3330u:
        goto loc_807D3330;
        break;
    case 0x807D3304u:
        goto loc_807D3304;
        break;
    default:
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
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_807D3304:
{
    r0 = (r31 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    goto loc_807D3358;
}

loc_807D3314:
{
}

loc_807D3318:
{
    r28 = 0;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(20))) {
        goto loc_807D3328;
    }
}

loc_807D3320:
{
}

loc_807D3324:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(18))) {
        goto loc_807D3358;
    }
}

loc_807D3328:
{
    r28 = 1;
    goto loc_807D3358;
}

loc_807D3330:
{
}

loc_807D3334:
{
    r28 = 0;
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(18))) {
        goto loc_807D3358;
    }
}

loc_807D333C:
{
    r5 = 1;
    r3 = 262144;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r31));
    r0 = (r3 + 129);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D3358;
    }
}

loc_807D3354:
{
    r28 = r5;
}

loc_807D3358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807D335C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D336C;
    }
}

loc_807D3360:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D336C:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D3188 func_807D3188 preserves=true fpr_mask=0x00000000
