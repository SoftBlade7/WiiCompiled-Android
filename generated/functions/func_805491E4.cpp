#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805491E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805491E4;

loc_805491E4:
{
    r9 = 0;
    r10 = 0;
    r4 = 0;
    r0 = 2;
}

loc_805491F4:
{
    r5 = (r3 + r4);
    r11 = 0;
    r8 = (r5 + 32);
    r5 = 0;
    ctr = r0;
}

loc_80549208:
{
    r7 = (r8 + r5);
    r12 = 8;
    r6 = MemoryInline::FlatRead8((r7 + 86));
}

loc_80549218:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80549220;
    }
}

loc_8054921C:
{
    r12 = MemoryInline::FlatRead32((r7 + 96));
}

loc_80549220:
{
}

loc_80549224:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r9))) {
        goto loc_8054922C;
    }
}

loc_80549228:
{
    r9 = r12;
}

loc_8054922C:
{
}

loc_80549230:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_805492D0;
    }
}

loc_80549234:
{
    r5 = (r5 + 112);
    r12 = 8;
    r7 = (r8 + r5);
    r6 = MemoryInline::FlatRead8((r7 + 86));
}

loc_80549248:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80549250;
    }
}

loc_8054924C:
{
    r12 = MemoryInline::FlatRead32((r7 + 96));
}

loc_80549250:
{
}

loc_80549254:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r9))) {
        goto loc_8054925C;
    }
}

loc_80549258:
{
    r9 = r12;
}

loc_8054925C:
{
}

loc_80549260:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_805492D0;
    }
}

loc_80549264:
{
    r5 = (r5 + 112);
    r12 = 8;
    r7 = (r8 + r5);
    r6 = MemoryInline::FlatRead8((r7 + 86));
}

loc_80549278:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80549280;
    }
}

loc_8054927C:
{
    r12 = MemoryInline::FlatRead32((r7 + 96));
}

loc_80549280:
{
}

loc_80549284:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r9))) {
        goto loc_8054928C;
    }
}

loc_80549288:
{
    r9 = r12;
}

loc_8054928C:
{
}

loc_80549290:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_805492D0;
    }
}

loc_80549294:
{
    r5 = (r5 + 112);
    r12 = 8;
    r7 = (r8 + r5);
    r6 = MemoryInline::FlatRead8((r7 + 86));
}

loc_805492A8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805492B0;
    }
}

loc_805492AC:
{
    r12 = MemoryInline::FlatRead32((r7 + 96));
}

loc_805492B0:
{
}

loc_805492B4:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r9))) {
        goto loc_805492BC;
    }
}

loc_805492B8:
{
    r9 = r12;
}

loc_805492BC:
{
}

loc_805492C0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_805492D0;
    }
}

loc_805492C4:
{
    r11 = (r11 + 3);
    r5 = (r5 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80549208;
    }
}

loc_805492D0:
{
    r10 = (r10 + 1);
    r4 = (r4 + 896);
}

loc_805492DC:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(4))) {
        goto loc_805491F4;
    }
}

loc_805492E0:
{
    r6 = 0;
    r0 = 2;
}

loc_805492E8:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r4 = (r4_rot_2 & 8160);
    r7 = 0;
    r5 = (r3 + r4);
    ctr = r0;
}

loc_805492F8:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & 1020);
    r4 = (r4 + 65536);
    r4 = (r4 + -28636);
    r5_addr_3 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_3);
}

loc_8054930C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r9))) {
        goto loc_80549314;
    }
}

loc_80549310:
{
    r9 = r4;
}

loc_80549314:
{
}

loc_80549318:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_8054939C;
    }
}

loc_8054931C:
{
    r7 = (r7 + 1);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & 1020);
    r4 = (r4 + 65536);
    r4 = (r4 + -28636);
    r5_addr_4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_4);
}

loc_80549334:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r9))) {
        goto loc_8054933C;
    }
}

loc_80549338:
{
    r9 = r4;
}

loc_8054933C:
{
}

loc_80549340:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_8054939C;
    }
}

loc_80549344:
{
    r7 = (r7 + 1);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_6 & 1020);
    r4 = (r4 + 65536);
    r4 = (r4 + -28636);
    r5_addr_5 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_5);
}

loc_8054935C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r9))) {
        goto loc_80549364;
    }
}

loc_80549360:
{
    r9 = r4;
}

loc_80549364:
{
}

loc_80549368:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_8054939C;
    }
}

loc_8054936C:
{
    r7 = (r7 + 1);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_7 & 1020);
    r4 = (r4 + 65536);
    r4 = (r4 + -28636);
    r5_addr_6 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_6);
}

loc_80549384:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r9))) {
        goto loc_8054938C;
    }
}

loc_80549388:
{
    r9 = r4;
}

loc_8054938C:
{
}

loc_80549390:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(8))) {
        goto loc_8054939C;
    }
}

loc_80549394:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805492F8;
    }
}

loc_8054939C:
{
    r6 = (r6 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
}

loc_805493A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805492E8;
    }
}

loc_805493A8:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805491E4 func_805491E4 preserves=true fpr_mask=0x00000000
